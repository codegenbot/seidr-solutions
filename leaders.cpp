```c++
#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    if(n == 0)
        return res;
    
    res.push_back(arr[n-1]);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= arr[i+1])
            res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    std::vector<int> input = {18, 48, 517, 190, 204, 169, 784, 446, 770, 327, 555, 908, 56, 410, 987, 629, 467, 142, 858};
    std::vector<int> result = leaders(input);
    for(int i: result)
        std::cout << i << " ";
    return 0;
}