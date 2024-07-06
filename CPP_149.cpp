bool issame(string s1, string s2) {
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

#include <iostream>
using namespace std;

int main() {
    vector<string> list;
    string s;
    cout << "Enter a series of strings. Enter 'stop' when done.\n";
    while (cin >> s && s != "stop") {
        list.push_back(s);
    }
    
    vector<string> result = sorted_list_sum(list);
    
    for (const auto& str : result) {
        int sum = 0;
        for (int i = 0; i < str.length(); i++) {
            sum += (str[i] - '0');
        }
        
        bool isSame = true;
        string newStr = to_string(sum);
        for (int i = 0; i < result.size(); i++) {
            if (issame(str, result[i])) continue;
            if (!issame(result[i], newStr)) {
                isSame = false;
                break;
            }
        }
        
        if (isSame) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}