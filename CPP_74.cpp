#include <vector>
#include <string>

bool issame(const string& s1, const string& s2) {
    if (s1.size() != s2.size()) return false;
    for (int i = 0; i < s1.size(); ++i) {
        if (tolower(s1[i]) != tolower(s2[i])) return false;
    }
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.size();
    }
    
    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.size();
    }

    if (sum1 < sum2) {
        vector<string> result;
        for (const string& s : lst1) {
            bool match = false;
            for (const string& t : lst2) {
                if (issame(s, t)) {
                    match = true;
                    break;
                }
            }
            if (!match) return lst1;
        }
        return lst1;
    } else if (sum1 > sum2) {
        vector<string> result;
        for (const string& s : lst2) {
            bool match = false;
            for (const string& t : lst1) {
                if (issame(s, t)) {
                    match = true;
                    break;
                }
            }
            if (!match) return lst2;
        }
        return lst2;
    } else {
        vector<string> result;
        bool match = false;
        for (const string& s : lst1) {
            for (const string& t : lst2) {
                if (issame(s, t)) {
                    match = true;
                    break;
                }
            }
            if (!match) return lst1;
        }
        return lst1;
    }
}