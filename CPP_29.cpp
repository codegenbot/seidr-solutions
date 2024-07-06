```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

int main() {
    int n;
    std::cout << "Enter number of strings: ";
    std::cin >> n;
    vector<string> strings(n);

    for(int i = 0; i < n; ++i) {
        std::cout << "Enter string" << (i + 1) << ": ";
        std::getline(std::cin, strings[i]);
    }

    string prefix;
    std::cout<<"Enter the prefix: ";
    std::cin>>prefix;

    vector<string> filteredStrings = filter_by_prefix(strings, prefix);

    if(filteredStrings.size() > 0){
        std::cout << "The list of strings that start with the given prefix are:" << std::endl;
        for(auto str : filteredStrings)
            std::cout << str << std::endl;
    } else
        std::cout<<"No string starts with the given prefix."<<std::endl;

    return 0;
}