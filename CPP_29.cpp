#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    // implementation here
    // Compare the contents of vector a and b
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

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const auto& str : strings){
        if(str.compare(0, prefix.length(), prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

int main(){
    // test cases here
    
    // Test case 1
    vector<string> strings1 = {"apple", "banana", "orange", "avocado"};
    string prefix1 = "a";
    vector<string> filteredStrings1 = filter_by_prefix(strings1, prefix1);
    vector<string> expected1 = {"apple", "avocado"};
    if(issame(filteredStrings1, expected1)){
        cout << "Test case 1 passed" << endl;
    }else{
        cout << "Test case 1 failed" << endl;
    }
    
    // Test case 2
    vector<string> strings2 = {"cat", "dog", "elephant", "zebra"};
    string prefix2 = "e";
    vector<string> filteredStrings2 = filter_by_prefix(strings2, prefix2);
    vector<string> expected2 = {"elephant"};
    if(issame(filteredStrings2, expected2)){
        cout << "Test case 2 passed" << endl;
    }else{
        cout << "Test case 2 failed" << endl;
    }
    
    // Test case 3
    vector<string> strings3 = {"apple", "banana", "orange"};
    string prefix3 = "p";
    vector<string> filteredStrings3 = filter_by_prefix(strings3, prefix3);
    vector<string> expected3 = {};
    if(issame(filteredStrings3, expected3)){
        cout << "Test case 3 passed" << endl;
    }else{
        cout << "Test case 3 failed" << endl;
    }
    
    return 0;
}