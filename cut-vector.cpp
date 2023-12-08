```
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    int n;
    while (std::cin >> n) {
        vec.push_back(n);
    }
    int left = 0, right = vec.size() - 1;
    while (left < right) {
        if (vec[left] == vec[right]) {
            break;
        }
        int diff = abs(vec[left] - vec[right]);
        if (diff <= 1) {
            left++;
            right--;
        } else {
            std::cout << "No solution" << std::endl;
            return 0;
        }
    }
    std::vector<int> subvec1, subvec2;
    for (int i = 0; i < left; i++) {
        subvec1.push_back(vec[i]);
    }
    for (int i = right + 1; i < vec.size(); i++) {
        subvec2.push_back(vec[i]);
    }
    std::cout << "Subvector 1: ";
    for (auto it : subvec1) {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    std::cout << "Subvector 2: ";
    for (auto it : subvec2) {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    return 0;
}
```