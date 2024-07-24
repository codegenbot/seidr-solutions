```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(auto str: strings){
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

int main(){
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> strings(n);
    for(int i = 0; i < n; i++){
        std::cout << "Enter string " << i+1 << ": ";
        std::getline(std::cin, strings[i]);
    }

    std::string prefix;
    std::cout << "Enter the prefix: ";
    std::cin >> prefix;

    std::vector<std::string> filtered_strings = filter_by_prefix(strings, prefix);

    if(filtered_strings.size() > 1 && issame(filtered_strings, strings)){
        for(auto str: filtered_strings)
            std::cout << str << "\n";
    }
    else
        std::cout << "No strings match the given prefix.\n";

    return 0;
}