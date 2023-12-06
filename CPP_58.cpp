
```
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::all_of(a.begin(), a.end(), [&b](int x){ return std::find(b.begin(), b.end(), x) != b.end(); });
}

int main() {
    std::cout << "Enter the first set of numbers: ";
    std::vector<int> a;
    int temp;
    while (std::cin >> temp) {
        a.push_back(temp);
    }

    std::cout << "Enter the second set of numbers: ";
    std::vector<int> b;
    while (std::cin >> temp) {
        b.push_back(temp);
    }

    if (issame(a, b)) {
        std::cout << "The two sets are the same." << std::endl;
    } else {
        std::cout << "The two sets are not the same." << std::endl;
    }
}
```