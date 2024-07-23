```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>

bool issame(char a, char b) {
    return std::tolower(a) == std::tolower(b);
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    std::vector<std::string> result;

    std::transform(lst1.begin(), lst1.end(), lst1.begin(), ::tolower);
    std::transform(lst2.begin(), lst2.end(), lst2.begin(), ::toupper);

    std::sort(lst1.begin(), lst1.end());
    std::sort(lst2.begin(), lst2.end());

    int i = 0, j = 0;

    while (i < lst1.size() && j < lst2.size()) {
        if (issame(lst1[i][0], lst2[j][0])) {
            result.push_back(string(lst1[i])); 
            i++;
            j++;
        } else if (lst1[i] < lst2[j]) {
            i++;
        } else {
            j++;
        }
    }

    return result;
}

int main() {
    std::vector<std::string> lst1 = {"cat", "dog", "bird"};
    std::vector<std::string> lst2 = {"CAT", "DOG", "BIRD"};

    for (const auto& s : total_match(lst1, lst2)) {
        std::cout << s << '\n';
    }

    return 0;
}