```
#include <vector>
#include <string>

bool issame(string a, string b) {
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    vector<string> result;
    int sum1 = 0, sum2 = 0;

    for (const string& s : lst1) {
        sum1 += s.length();
    }
    for (const string& s : lst2) {
        sum2 += s.length();
    }

    if (sum1 < sum2) {
        return lst1;
    } else if (sum1 > sum2) {
        return lst2;
    } else {
        for (string s : lst1) {
            for (string t : lst2) {
                if (issame(s, t)) result.push_back(t);
            }
        }
        return result;
    }
}