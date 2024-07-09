```cpp
#include <vector>
#include <string>

namespace util {
    bool issame(const string& s1, const string& s2) {
        if (s1.length() != s2.length()) {
            return false;
        }
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                return false;
            }
        }
        return true;
    }
}

std::vector<std::string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.length();
    }
    
    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.length();
    }
    
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else {
        vector<string> result;
        for (const string& s : lst1) {
            if (util::issame(s, "hello")) {
                result.push_back(s);
            }
        }
        return result;
    }
}