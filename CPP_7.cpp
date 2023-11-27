#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using std::vector;
using std::string;

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (string str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    vector<string> result = filter_by_substring(strings, substring);
    
    for (string str : result) {
        std::cout << str << " ";
    }
    
    return 0;
}