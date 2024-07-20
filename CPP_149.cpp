```c
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.size() != b.size()) {
                 return a.size() < b.size();
             } else {
                 return a < b;
             }
         });

    return result;
}

int main() {
    std::vector<std::string> result = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"});
    for (const auto& str : result) {
        std::cout << str << std::endl;
    }
}