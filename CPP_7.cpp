#include <iostream>
#include <vector>
#include <string>

bool same(string s1, string s2) {
    if(s1.length() != s2.length())
        return false;
    for(int i = 0; i < s1.length(); i++) {
        if(s1[i] != s2[i])
            return false;
    }
    return true;
}

int main() {
    vector<string> strings;
    string substring, input;
    cout << "Enter the number of strings: ";
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> input;
        strings.push_back(input);
    }
    
    cout << "Enter the substring to search: ";
    cin >> substring;
    
    vector<string> result = filter_by_substring(strings, substring);
    
    for(auto& s : result) {
        bool found = false;
        for(int i = 0; i < strings.size(); i++) {
            if(same(s, strings[i])) {
                cout << s << endl;
                found = true;
                break;
            }
        }
        
        if(!found)
            cout << s << endl;
    }
    
    return 0;
}