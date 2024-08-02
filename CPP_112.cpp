#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::pair<std::vector<std::string>, std::string> reverse_delete(const std::string& a, const std::string& b) {
    std::vector<std::string> result;
    for (char ch : a) {
        if (b.find(ch) == std::string::npos) {
            result.push_back(std::string(1, ch));
        }
    }
    std::vector<std::string> result_reverse = result;
    std::reverse(result_reverse.begin(), result_reverse.end());
    return { result, issame(result, result_reverse) ? "True" : "False" };
}

int main() {
    assert(issame(reverse_delete("mamma", "mia").first, {"", "True"}));
    return 0;
}