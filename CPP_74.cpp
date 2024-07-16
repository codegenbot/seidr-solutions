#include <string>

bool issame(string s1, string s2) {
    return s1 == s2;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (string s : lst1) {
        sum1 += s.size();
    }
    for (string s : lst2) {
        sum2 += s.size();
    }
    if (sum1 < sum2) {
        return lst1;
    } else {
        return lst2;
    }
}