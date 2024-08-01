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
    vector<string> strings = {"apple", "banana", "cherry"};
    string substring = "an";
    
    vector<string> filtered = filter_by_substring(strings, substring);

    if(issame(filtered, vector<string>{})) {
        cout << "No strings found containing the given substring." << endl;
    } else {
        for(string s : filtered) {
            cout << s << endl;
        }
    }

    return 0;
}