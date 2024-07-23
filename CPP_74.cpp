#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0, sum2 = 0;

    for (const std::string& s : lst1) {
        sum1 += s.length();
    }
    for (const std::string& s : lst2) {
        sum2 += s.length();
    }

    if (sum1 < sum2) {
        return issame(lst1, vector<string>(), vector<string>()) ? lst1 : lst2;
    } else if (sum1 > sum2) {
        return issame(vector<string>(), vector<string>(), lst2) ? lst2 : lst1;
    } else {
        return issame(lst1, vector<string>(), vector<string>()) ? lst1 : lst2;
    }
}