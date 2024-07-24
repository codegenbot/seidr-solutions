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
    int m;
    cin >> m;
    vector<string> substrings;
    for(int i = 0; i < m; i++) {
        string s;
        cin >> s;
        substrings.push_back(s);
    }

    vector<string> filtered_strings = filter_by_substring(strings, substrings[0]);
    if(issame(filtered_strings, strings)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
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