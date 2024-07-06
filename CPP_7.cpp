#include <iostream>
#include <vector>
#include <string>

bool isSame(string s1, string s2) {
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

int main() {
    int n;
    std::cin >> n;
    vector<string> strings(n);
    for(int i = 0; i < n; i++){
        cin >> strings[i];
    }

    string substring;
    cin >> substring;

    vector<string> result;
    for(string s : strings){
        if(isSame(s, substring))
            result.push_back(s);
    }
    return 0;
}