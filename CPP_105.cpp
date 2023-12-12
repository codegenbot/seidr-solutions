```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::string& s1, const std::string& s2) {
    return s1 == s2;
}

int by_length(const std::string& s1, const std::string& s2) {
    if (s1.size() < s2.size()) {
        return -1;
    } else if (s1.size() > s2.size()) {
        return 1;
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