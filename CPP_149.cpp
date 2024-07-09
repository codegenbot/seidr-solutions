#include <algorithm>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;

    for (int i = 0; i < a.size(); i++) {
        if (sorted_list_sum({a[i], b[i]})[0] != sorted_list_sum({b[i], a[i]})[0]) {
            return false;
        }
    }

    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end(),
         [](const std::string& a, const std::string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });

    return result;
}

bool main() {
    std::vector<std::string> lst = {"aaaa", "bbbb", "dd", "cc"};
    assert(issame(sorted_list_sum(lst), sorted({})));
    return 0;
}