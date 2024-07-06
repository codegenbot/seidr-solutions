```
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (!issame(v1[i], v2[i])) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0 || issame({str}, {"sum"})) {
            result.push_back(str);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main_entry() {
    std::vector<std::string> lst = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"});
    assert(std::equal(lst.begin(), lst.end(), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}