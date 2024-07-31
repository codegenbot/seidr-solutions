#include <iostream>
#include <vector>

bool issame(std::vector<int> arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            return false;
        }
    }
    return true;
}

std::vector<int> filter_integers(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (!std::is_integral(arr[i])) { 
            return {};
        }
    }
    return arr;
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

        assert(issame(testArr1));
        assert(issame(std::vector<int>(testArr2.begin(), testArr2.end())));
    }
    return 0;
}