#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}

vector<pair<string, string>> reverse_delete(string s, string c) {
    vector<pair<string, string>> result;
    
    // Remove characters in s that are equal to any character in c
    string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found)
            temp += ch;
    }
    
    // Check if the result string is palindrome
    string str = temp;
    reverse(str.begin(), str.end());
    bool check = (str == temp);
    
    result.push_back({temp, (check ? "True" : "False")});
    
    return result;
}