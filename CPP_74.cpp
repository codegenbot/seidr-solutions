#include <vector>
#include <string>
#include <initializer_list>

bool issame(std::vector<std::string> a, const auto& vec2) {
    if (a.size() != vec2.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != vec2[i]) return false;
    }
    return true;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, const auto& vec2) {
    int sum1 = 0, sum2 = 0;
    for (const auto& s : lst1) {
        sum1 += s.length();
    }
    for (const auto& s : vec2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return std::vector<std::string>(vec2);
    else return lst1;