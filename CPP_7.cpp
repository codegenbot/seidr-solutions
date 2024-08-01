```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;

    vector<string> strings(n);
    for(int i = 0; i < n; i++) {
        std::cin >> strings[i];
    }

    string substring;
    std::cin >> substring;

    vector<string> filtered_strings = filter_by_substring(strings, substring);

    if(issame({}, filtered_strings))
        cout << "Empty";
    else
        for(string s : filtered_strings)
            cout << s << endl;

    return 0;
}