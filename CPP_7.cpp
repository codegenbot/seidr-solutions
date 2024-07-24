#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> strings = {"hello", "world", "helloworld"};
    string substring = "world";
    vector<string> output = filter_by_substring(strings, substring);
    
    if (issame(output, strings)) {
        cout << "The output is the same as input." << endl;
    } else {
        cout << "The output is different from input." << endl;
    }
    
    return 0;
}