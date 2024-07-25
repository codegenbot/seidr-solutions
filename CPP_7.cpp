#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (find(a[i].begin(), a[i].end(), ' ') == a[i].end())
            return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto& str : strings){
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;

}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    
    vector<string> strings;
    
    for(int i = 0; i < n; i++) {
        string s;
        cout << "Enter string " << i+1 << ": ";
        cin >> s;
        strings.push_back(s);
    }
    
    string substring;
    cout << "Enter the substring: ";
    cin >> substring;
    
    vector<string> filtered_strings = filter_by_substring(strings, substring);

    if(issame(strings, filtered_strings)) {
        cout << "The original and filtered strings are same." << endl;
    } else {
        cout << "The original and filtered strings are different." << endl;
    }

    return 0;
}