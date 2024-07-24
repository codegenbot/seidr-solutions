```cpp
#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    set<string> setA(a.begin(), a.end());
    set<string> setB(b.begin(), b.end());

    return setA == setB;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> strings;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        strings.push_back(s);
    }
    
    string substring;
    cin >> substring;

    vector<string> result = filter_by_substring(strings, substring);

    if(issame({}, strings) && issame({}, {substring})) {
        cout << "All substrings are present in the main string." << endl;
    } else if(issame(result, strings)) {
        cout << "The filtered vector contains all the original strings." << endl;
    } else {
        cout << "The filtered vector does not contain all the original strings." << endl;
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