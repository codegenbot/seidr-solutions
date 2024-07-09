#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (const auto& s : lst1) {
        sum1 += s.length();
    }
    for (const auto& s : lst2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else if (issame(lst1, lst2)) return total_match_helper(lst1);
    else return {};
}

std::vector<std::string> total_match_helper(std::vector<std::string> vec) {
    std::sort(vec.begin(), vec.end(),
        [](const auto& a, const auto& b) {
            if (a.length() == b.length()) {
                return issame(a, b);
            }
            else return a.length() < b.length();
        });
    return vec;
}