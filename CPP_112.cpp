#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::vector<std::string> result_vec;
    for (const auto& str : a) {
        if (std::find(b.begin(), b.end(), str) == b.end()) {
            result_vec.push_back(str);
        }
    }
    
    std::vector<std::string> result_reverse = result_vec;
    std::reverse(result_reverse.begin(), result_reverse.end());

    return result_vec == result_reverse;
}

int main() {
    assert(issame({"mamma"}, {"mia"}) == true);
    return 0;
}