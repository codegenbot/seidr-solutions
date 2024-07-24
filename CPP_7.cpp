#include <iostream>
#include <vector>
#include <set>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    set<string> setA(a.begin(), a.end());
    set<string> setB(b.begin(), b.end());

    return setA == setB;
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    vector<string> strings(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter string " << (i+1) << ": ";
        std::getline(std::cin, strings[i]);
    }

    int m;
    std::cout << "Enter the number of substrings: ";
    std::cin >> m;

    vector<string> substrings(m);
    for(int i = 0; i < m; i++) {
        std::cout << "Enter substring " << (i+1) << ": ";
        std::getline(std::cin, substrings[i]);
    }

    vector<string> filtered_strings = filter_by_substring(strings, substrings[0]);

    if(issame({substrings[0]}, {substrings[1]})) {
        for(string s : strings) {
            bool found = false;
            for(string sub : substrings) {
                if(s.find(sub) != string::npos) {
                    found = true;
                    break;
                }
            }
            if(found)
                std::cout << s << " ";
        }
    } else {
        vector<string> result = filter_by_substring(strings, substrings[0]);
        for(string s : result) {
            bool found = false;
            for(string sub : substrings) {
                if(s.find(sub) != string::npos) {
                    found = true;
                    break;
                }
            }
            if(found)
                std::cout << s << " ";
        }
    }

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}