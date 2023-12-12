```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::string& a, const std::string& b) {
    return a == b;
}

int by_length(const std::string& a, const std::string& b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    } else {
        return 0;
    }
}

int main() {
    std::vector<std::string> my_list = {"apple", "banana", "orange"};
    std::sort(my_list.begin(), my_list.end(), issame);
    std::cout << "Sorted list: ";
    for (const auto& s : my_list) {
        std::cout << s << " ";
    }
    std::cout << "\n";

    std::sort(my_list.begin(), my_list.end(), by_length);
    std::cout << "Sorted list by length: ";
    for (const auto& s : my_list) {
        std::cout << s << " ";
    }
    std::cout << "\n";

    return 0;
}
```