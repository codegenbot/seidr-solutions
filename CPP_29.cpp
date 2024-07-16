#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

int main(){
    vector<string> test_strings = {"apple", "banana", "apricot", "avocado"};
    string prefix = "ap";
    vector<string> filtered_strings = filter_by_prefix(test_strings, prefix);
    for(const auto& str : filtered_strings){
        std::cout << str << std::endl;
    }
    return 0;
}