```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    std::vector<std::string> result;
    std::sort(lst1.begin(), lst1.end());
    std::sort(lst2.begin(), lst2.end());

    int i = 0, j = 0;
    
    while (i < lst1.size() && j < lst2.size()) {
        if (lst1[i] == lst2[j]) {
            result.push_back(lst1[i]);
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
    std::vector<std::string> vec1 = {"hi", "admin"};
    std::vector<std::string> vec2 = {"hI", "Hi"};

    std::vector<std::string> result = total_match(vec1, vec2);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << std::endl;
    }

    return 0;
}