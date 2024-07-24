#include <iostream>
#include <vector>
#include <set>

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
        cin >> strings[i];
    }

    int m;
    std::cout << "Enter the number of substrings: ";
    std::cin >> m;

    vector<string> sub(m);
    for(int i = 0; i < m; i++) {
        std::cout << "Enter substring " << (i+1) << ": ";
        cin >> sub[i];
    }

    vector<string> filtered_strings = filter_by_substring(strings, sub[0]);

    if(issame(filtered_strings, strings)) {
        cout << "The filtered strings are the same as the original strings." << endl;
    } else {
        cout << "The filtered strings are different from the original strings." << endl;
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