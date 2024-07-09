#include <algorithm>
#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b) {
    return a == b;
}

int my_main() {
    std::vector<std::string> lst = {"aa", "bb", "cc", "dd"};
    std::vector<std::string> result = sorted_list_sum(lst);
    bool same_result = issame(sorted_list_sum({{"a", "b"}, {"c", "d"}}), {{"c", "d"}, {"a", "b"}});
    return 0;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    std::sort(result.begin(), result.end(),
             [](const std::string& a, const std::string& b) {
                 if (a.length() != b.length()) {
                     return a.length() < b.length();
                 } else {
                     return a < b;
                 }
             });
    return result;
}