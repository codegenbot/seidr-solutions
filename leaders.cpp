```c++
#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    for(int i=0; i<n; i++) {
        if(i == n-1 || arr[i] >= arr.back()) {
            res.push_back(arr[i]);
        }
    }
    
    return res;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::vector<int> result = leaders(arr);

    std::cout << "Leaders: ";
    for(int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}