#include <vector>
#include <iostream>

bool issame(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            return false;
        }
    }
    return true;
}

std::vector<int> filter_integers(const std::vector<int>& arr) {
    std::vector<int> result;
    for (int val : arr) {
        if (std::is_integral(val)) { 
            result.push_back(val);
        } else {
            return {};  // or modify this to suit your requirement
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    if (arr.size() != filter_integers(arr).size()) { 
        std::cout << "Error: The array must only contain integers." << std::endl;
    } else {
        // your original code here
    }
    return 0;
}