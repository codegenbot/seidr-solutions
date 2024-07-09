#include <vector>
#include <string>

bool issame(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    if (lst1.size() != lst2.size()) return false;
    for (size_t i = 0; i < lst1.size(); i++) {
        if (lst1[i] != lst2[i]) return false;
    }
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (const auto& s : lst1) {
        sum1 += s.length();
    }
    for (const auto& s : lst2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return lst1;
}