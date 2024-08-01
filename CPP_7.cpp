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
    vector<string> strings = {"hello", "world", "hell", "goodbye"};
    string substring = "ell";
    
    vector<string> filtered_strings = filter_by_substring(strings, substring);
    
    if(issame({substring}, filter_by_substring({substring}, substring))){
        cout << "Substrings are same." << endl;
    } else {
        cout << "Substrings are different." << endl;
    }
    
    for(string s : filtered_strings){
        cout << s << endl;
    }
    
    return 0;
}