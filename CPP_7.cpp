#include <iostream>
#include <vector>
using namespace std;

bool same(vector<string> a, vector<string> b){
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings) {
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;
}

int main() {
    vector<string> a = {"apple", "banana", "cherry"};
    vector<string> b = {"apple", "banana", "cherry"};
    
    cout << boolalpha << same(a, b) << endl;

    vector<string> strings = {"hello world", "world hello", "cpp is awesome", "cpp is amazing", "hello again"}; 
    string substring = "world";
    vector<string> filtered_strings = filter_by_substring(strings, substring);
    
    for(auto str : filtered_strings)
        cout << str << endl;
    
    return 0;
}