#include <vector>
#include <string>

bool same(const std::vector<std::string>& v1, const std::string& str) {
    if (v1.size() != 1) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (!str.compare(v1[i])) {
            return true;
        }
    }
    return false;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0 || same({str}, {"sum"})) {
            result.push_back(str);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(std::equal(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}