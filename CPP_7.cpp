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

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> strings;
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, str);
        strings.push_back(str);
    }

    std::cout << "Enter the substring to filter: ";
    std::string substring;
    std::getline(std::cin, substring);

    auto filteredStrings = filter_by_substring(strings, substring);
    
    if(filteredStrings.size() > 0) {
        std::cout << "Filtered strings: " << std::endl;
        for(auto str : filteredStrings)
            std::cout << str << std::endl;
    } else
        std::cout << "No strings match the given substring." << std::endl;

    if(!issame(std::vector<std::string>(strings.begin(), strings.end()), filteredStrings))
        std::cout << "Filtered strings are not same as original strings." << std::endl;
    else
        std::cout << "Filtered strings are same as original strings." << std::endl;

    return 0;
}