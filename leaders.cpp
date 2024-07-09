```cpp
#include <vector>

int main() {
    std::vector<int> arr = {12, 10, 8, 6};
    std::vector<int> result = leaders(arr);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}

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