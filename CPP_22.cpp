#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
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

int filter_integers(std::vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (!std::isdigit(arr[i])) {
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
        //assert(issame(arr, arr, n));
    }
    return 0;
}