#include <iostream>
#include <vector>
#include <string>
#include <cassert> 

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> strings(n);
    for(int i = 0; i < n; ++i){
        cin >> strings[i];
    }
    
    string substring;
    cin >> substring;
    
    vector<string> result = filter_by_substring(strings, substring);
    
    for(const auto& str : result){
        cout << str << endl;
    }
    
    return 0;
}