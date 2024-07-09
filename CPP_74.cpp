```cpp
#include <vector>
#include <string>

namespace util {
    bool issame(const std::string& s1, const std::string& s2) {
        if (s1.length() != s2.length()) return false;
        for (int i = 0; i < s1.length(); ++i) {
            if (s1[i] != s2[i]) return false;
        }
        return true;
    }

    std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
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
            vector<string> result;
            for (const string& s : lst1) {
                bool same = true;
                for (const std::string& t : lst2) {
                    if (issame(s, t)) {
                        same = false;
                        break;
                    }
                }
                if (same) result.push_back(s);
            }
            return result;
        }
    }
}