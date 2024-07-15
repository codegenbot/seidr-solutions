#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b){ 
    return a == b;
}

int main(){
    vector<string> strings = {"apple", "banana", "cherry", "orange", "kiwi"};
    string substring = "an";
    
    vector<string> filtered_strings = filter_by_substring(strings, substring);

    assert(issame(filtered_strings, {"banana", "orange"}));
    
    return 0;
}