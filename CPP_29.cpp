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
    vector<string> strings = {"apple", "banana", "apricot", "avocado"};
    string prefix = "a";
    vector<string> result = filter_by_prefix(strings, prefix);
    
    if(issame({{"apple", "apricot"}}, result)){
        std::cout << "The result matches the expected output." << std::endl;
    }
    else{
        std::cout << "The result does not match the expected output." << std::endl;
    }
    
    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}