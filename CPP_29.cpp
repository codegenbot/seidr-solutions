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
    vector<string> input_strings = {"apple", "banana", "orange", "grape"};
    string prefix = "or";
    
    vector<string> filtered_strings = filter_by_prefix(input_strings, prefix);

    for(const auto& str : filtered_strings){
        std::cout << str << " ";
    }

    return 0;
}