#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const vector<string>& a, const vector<string>& b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<string>& filter_by_substring(vector<string> strings, string substring);

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> filtered_strings;
    for(const string& str : strings){
        if(str.find(substring) != string::npos){
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main(){
    vector<string> strings = {"apple", "banana", "cherry", "orange", "kiwi"};
    string substring = "an";
    
    vector<string> expected_filtered_strings = {"banana", "orange"};
    
    vector<string> filtered_strings = filter_by_substring(strings, substring);
    
    if(issame(filtered_strings, expected_filtered_strings)){
        std::cout << "Test passed" << std::endl;
    } else {
        std::cout << "Test failed" << std::endl;
    }
    
    return 0;
}