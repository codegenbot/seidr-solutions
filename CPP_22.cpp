#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> filter_integers(const std::vector<int>& arr) {
    std::vector<int> result;
    for (int x : arr) {
        if (std::is_integral(x)) { 
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        arr[i] = x;
    }
    if (arr.size() != filter_integers(arr).size()) { 
        std::cout << "Error: The array must only contain integers." << std::endl;
    } else {
        std::vector<int> testArr1 = {3, 99, 3, 3, 97, 98};
        std::vector<int> testArr2 = {3, 3, 3};

        if (!issame(filter_integers(arr), filter_integers(testArr1))) {
            std::cout << "Array is not same." << std::endl;
        } else {
            std::cout << "Array is same." << std::endl;
        }
    }
    return 0;
}