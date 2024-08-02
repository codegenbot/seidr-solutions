```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> strings(n);
    for(int i = 0; i < n; ++i){
        std::cin >> strings[i];
    }

    std::string substring;
    std::cin >> substring;

    vector<string> result = filter_by_substring(strings, substring);

    if(issame({substring}, {result[0]})) {
        for(string s : result) {
            cout << s << endl;
        }
    } else {
        cout << "No matching strings found." << endl;
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