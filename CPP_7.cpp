#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string> filter_by_substring(const vector<string>& strings, const string& substring) {
    vector<string> result;
    for(const string& str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> strings = {"apple", "banana", "cherry"};
    string substring;
    cin >> substring;
    
    vector<string> filteredStrings = filter_by_substring(strings, substring);
    
    for(const string& str : filteredStrings){
        cout << str << endl;
    }
    
    return 0;
}