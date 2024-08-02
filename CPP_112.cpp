#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<std::string> issame(const std::vector<std::string>& vec_a, const std::vector<std::string>& vec_b) {
    std::vector<std::string> result_vec;
    for (size_t i = 0; i < vec_a.size(); ++i) {
        std::string result = "";
        for (char ch : vec_a[i]) {
            if (vec_b[i].find(ch) == std::string::npos) {
                result += ch;
            }
        }
        std::string result_reverse = result;
        std::reverse(result_reverse.begin(), result_reverse.end());
        result_vec.push_back(result == result_reverse ? "true" : "false");
    }
    return result_vec;
}

int main() {
    std::vector<std::string> expected = {"true"};
    std::vector<std::string> result = issame({"mamma"}, {"mia"});
    assert(result == expected);
    return 0;
}