#include <vector>
#include <iostream>

bool issame(std::vector<int> arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int filter_integers(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (!std::is_integral(arr[i]).is_always()) { 
            return -1;
        }
    }
    return 1;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    if (filter_integers(arr) == -1) {
        std::cout << "Error: The array must only contain integers." << std::endl;
    } else {
        std::vector<int> testArr1 = {3, 99, 3, 3, 97, 98};
        std::vector<int> testArr2 = {3, 3, 3};

        assert(issame(testArr1));
        assert(issame(testArr2));
    }
    return 0;
}