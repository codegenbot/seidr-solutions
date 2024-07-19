```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    vector<string> str = {"apple", "banana", "apricot"};
    string pre = "a";
    vector<string> filtered = filter_by_prefix(str, pre);
    
    if(issame(str, filtered)){
        std::cout << "The strings are the same." << std::endl;
    } else {
        std::cout << "The strings are different." << std::endl;
    }
    
    return 0;
}