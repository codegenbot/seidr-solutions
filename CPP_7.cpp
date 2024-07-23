```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings){
        if(str.find(substring) != std::string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main(){
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> input_strings(n);
    for(int i=0; i<n; i++){
        std::cout << "Enter string " << (i+1) << ": ";
        std::getline(std::cin, input_strings[i]);
    }

    std::string sub;
    std::cout << "Enter substring to filter by: ";
    std::cin >> sub;

    std::vector<std::string> filtered = filter_by_substring(input_strings, sub);

    if(issame(input_strings, filtered)){
        for(auto str : filtered){
            std::cout << str << "\n";
        }
    } else{
        std::cout << "No strings match the given substring.\n";
    }

    return 0;
}