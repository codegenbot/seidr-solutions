#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

int main(){
    vector<string> strings = {"apple", "banana", "apricot", "avocado"};
    string prefix = "a";
    vector<string> result = filter_by_prefix(strings, prefix);
    if(issame(result, {"apple", "apricot"}))
        std::cout << "The filtered list is as expected.\n";
    else
        std::cout << "The filtered list does not match the expected.\n";
    return 0;
}