#include <string>
bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}
vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (find(c.begin(), c.end(), s[i]) == c.end()) {
            temp += s[i];
        }
    }
    result.push_back(temp);
    string rev = temp;
    reverse(rev.begin(), rev.end());
    if (issame(vector<string>{temp, rev}, vector<string>{result[0], result[1]}))
        result.push_back("True");
    else
        result.push_back("False");
    return result;
}