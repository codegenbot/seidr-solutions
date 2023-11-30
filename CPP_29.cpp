#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> filteredStrings;
    for (const string& str : strings) {
        if (str.find(prefix) == 0) {
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}

int main() {
    vector<string> strings = {"abc", "bcd", "cde", "vector"};
    string prefix = "a";
    
    vector<string> result = filter_by_prefix(strings, prefix);
    
    for (const string& str : result) {
        cout << str << " ";
    }
    
    return 0;
}