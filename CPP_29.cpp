#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) 
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

int main() {
    vector<string> strings = {"apple", "banana", "apricot", "avocado"};
    string prefix = "a";
    vector<string> filtered_strings = filter_by_prefix(strings, prefix);

    if (issame(filtered_strings, {"apple", "apricot"})) 
        std::cout << "Strings are same." << std::endl;
    else
        std::cout << "Strings are not same." << std::endl;

    return 0;
}