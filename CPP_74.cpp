#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i)
        if(a[i] != b[i]) return false;
    return true;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0;
    for (const std::string& s : lst1) {
        sum1 += s.length();
    }

    int sum2 = 0;
    for (const std::string& s : lst2) {
        sum2 += s.length();
    }

    if (sum1 < sum2) {
        return lst1;
    } else if (sum1 > sum2) {
        return lst2;
    } else {
        return issame(lst1, lst2) ? lst1 : lst2;
    }
}