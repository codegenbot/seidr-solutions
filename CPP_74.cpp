#include <string>
#include <vector>

namespace util {
    bool issame(const std::string& s1, const std::string& s2) {
        if (s1.length() == s2.length()) {
            return true;
        } else {
            return false;
        }
    }

    std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
        int sum1 = 0;
        for (const auto& s : lst1) {
            sum1 += s.length();
        }
        
        int sum2 = 0;
        for (const auto& s : lst2) {
            sum2 += s.length();
        }
        
        if (sum1 < sum2) return lst1;
        else if (sum1 > sum2) return lst2;
        else {
            std::vector<std::string> result;
            for (const auto& s : lst1) {
                if (util::issame(s, s)) {
                    result.push_back(s);
                }
            }
            return result;
        }
    }
}