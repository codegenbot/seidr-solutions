#include <iostream>
#include <vector>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) { 
    std::vector<std::string> result; 
    for(auto s : strings){ 
        if (!s.empty() && s.find(prefix) == 0) 
            result.push_back(s); 
    } 
    return result;
}

bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}
int main(){
    std::vector<std::string> strings = {"hello", "hi", "hey"};
    std::string prefix = "h";
    
    std::vector<std::string> filteredStrings = filter_by_prefix(strings, prefix);

    for(auto s : filteredStrings){
        std::cout << s << "\n";
    }

    assert(issame(filteredStrings, std::vector<std::string>({"hi", "hey"})));

    return 0;
}