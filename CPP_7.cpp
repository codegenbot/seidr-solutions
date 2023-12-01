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
    // Test case 1
    vector<string> strings1{"apple", "banana", "cat", "dog"};
    string substring1 = "a";
    vector<string> expected1{"apple", "banana"};
    vector<string> output1 = filter_by_substring(strings1, substring1);
    assert(issame(output1, expected1));
    
    // Test case 2
    vector<string> strings2{"hello", "world", "cpp", "code"};
    string substring2 = "o";
    vector<string> expected2{"hello", "code"};
    vector<string> output2 = filter_by_substring(strings2, substring2);
    assert(issame(output2, expected2));
    
    // Test case 3
    vector<string> strings3{"abcd", "efgh", "ijkl", "mnop"};
    string substring3 = "z";
    vector<string> expected3{};
    vector<string> output3 = filter_by_substring(strings3, substring3);
    assert(issame(output3, expected3));
    
    cout << "All test cases passed!" << endl;
    
    return 0;
}