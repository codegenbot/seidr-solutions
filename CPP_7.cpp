#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

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

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> filtered_strings;
    
    for(const auto& str : strings){
        if(str.find(substring) != string::npos){
            filtered_strings.push_back(str);
        }
    }
    
    return filtered_strings;
}

int main(){
    // Test cases
    vector<string> strings{"apple", "banana", "pineapple", "orange"};
    
    // Test case 1
    string substring1 = "ap";
    vector<string> filtered1 = filter_by_substring(strings, substring1);
    vector<string> expected1{"apple", "apple"};
    assert(issame(filtered1, expected1));
    
    // Test case 2
    string substring2 = "na";
    vector<string> filtered2 = filter_by_substring(strings, substring2);
    vector<string> expected2{"banana", "pineapple", "orange"};
    assert(issame(filtered2, expected2));
    
    // Test case 3
    string substring3 = "an";
    vector<string> filtered3 = filter_by_substring(strings, substring3);
    vector<string> expected3{"banana", "pineapple"};
    assert(issame(filtered3, expected3));
    
    // Test case 4
    string substring4 = "orange";
    vector<string> filtered4 = filter_by_substring(strings, substring4);
    vector<string> expected4{"orange"};
    assert(issame(filtered4, expected4));
    
    cout << "All test cases passed!" << endl;
    
    return 0;
}