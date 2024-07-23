#include <vector>
#include <string>

bool issame(const std::string &str1, const std::string &str2) {
    return str1 == str2;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    std::vector<std::string> result;
    int sum1 = 0, sum2 = 0;

    for (const std::string &s : lst1) {
        sum1 += s.length();
    }
    for (const std::string &s : lst2) {
        sum2 += s.length();
    }

    if (sum1 < sum2) {
        return lst1;
    } else if (sum1 > sum2) {
        return lst2;
    } else {
        for (const std::string &s1 : lst1) {
            for (const std::string &s2 : lst2) {
                if (!issame(s1, s2)) {
                    result.push_back(s1);
                    result.push_back(s2);
                    break;
                }
            }
            if (!result.empty()) {
                break;
            }
        }
        return result;
    }
}