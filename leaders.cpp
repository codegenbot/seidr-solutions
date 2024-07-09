#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res(arr.back()); // initialize result with the last element
    
    for(int i=n-2; i>=0; i--) {
        if(res.back() <= arr[i]) 
            res.push_back(arr[i]);
        else
            break;
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