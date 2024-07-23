#include <iostream>
#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b){
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
    std::cin >> n;

    std::vector<std::string> strings(n);
    for(int i = 0; i < n; i++){
        std::cin >> strings[i];
    }

    std::string sub;
    std::cin >> sub;

    auto filtered_strings = filter_by_substring(strings, sub);

    if(same({sub},filtered_strings)){
        std::cout << "Substrings are the same" << std::endl;
    } else {
        std::cout << "Substrings are different" << std::endl;
    }

    return 0;
}