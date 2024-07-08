#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) -> std::vector<std::string> {
    int sum1 = 0;
    for (const auto &s : lst1) {
        sum1 += s.length();
    }
    int sum2 = 0;
    for (const auto &s : lst2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else if (!issame(lst1, lst2)) {
        int sum3 = 0, sum4 = 0;
        for (const auto &s : lst1) {
            sum3 += s.length();
        }
        for (const auto &s : lst2) {
            sum4 += s.length();
        }
        if (sum3 < sum4) return lst1;
        else if (sum3 > sum4) return lst2;
        else return lst1;
    } else return lst1;
}