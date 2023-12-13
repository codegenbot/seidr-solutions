#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto s : strings){
        if(s.substr(0, prefix.length()) == prefix){
            result.push_back(s);
        }
    }
    return result;
}

int main(){
    vector<string> strings = {"apple", "banana", "cherry", "pear"};
    string prefix = "ap";
    vector<string> filteredStrings = filter_by_prefix(strings, prefix);
    for(auto s : filteredStrings){
        cout << s << " ";
    }
    return 0;
}