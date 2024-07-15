#include <vector>
#include <string>
#include <cassert>

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b, string sub){
    return filter_by_substring(a, sub) == filter_by_substring(b, sub);
}

int main(){
    vector<string> a = {"apple", "banana", "orange", "grape"};
    vector<string> b = {"banana", "grape", "cherry", "pear"};
    string substring = "an";
    
    assert(issame(a, b, substring) == true);

    return 0;
}