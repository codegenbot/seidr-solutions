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

int main(){
    vector<string> strings = {"apple", "banana", "apricot", "orange", "grape"};
    string prefix = "ap";

    vector<string> filtered_strings = filter_by_prefix(strings, prefix);

    for(const auto& str : filtered_strings){
        std::cout << str << std::endl;
    }

    return 0;
}