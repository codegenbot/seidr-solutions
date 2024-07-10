```cpp
#include <algorithm>
#include <vector>
#include <string>

bool same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
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
             if (a.size() != b.size()) {
                 return a.size() < b.size();
             } else {
                 return a < b;
             }
         });

    return result;
}

int main() {
    assert(same(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}