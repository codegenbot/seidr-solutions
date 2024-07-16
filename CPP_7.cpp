#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring);

int main(){
    // Test the filter_by_substring function
    vector<string> test_strings = {"apple", "banana", "orange", "grape", "pear"};
    string test_substring = "an";
    vector<string> filtered = filter_by_substring(test_strings, test_substring);
    
    for(const string& str : filtered){
        cout << str << " ";
    }
    cout << endl;
    
    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> filtered_strings;
    for(const string& str : strings){
        if(str.find(substring) != string::npos){
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}