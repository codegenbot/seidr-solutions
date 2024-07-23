#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main(){
    std::vector<std::string> strings = {"hello", "world", "hello"};
    std::string substring = "ello";
    
    std::vector<std::string> result = filter_by_substring(strings, substring);
    
    assert(issame(result, {"hello"}));
    
    return 0;
}