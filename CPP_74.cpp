#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (strcmp(a[i].c_str(), b[i].c_str()))
            return false;
    }
    return true;
}

std::vector<std::string> total_match(std::vector<std::string>, std::vector<std::string>) {
    // implementation of the total_match function
    // for example, this is how you could modify two input vectors into one:
    // std::vector<std::string> result = {};
    // for(int i = 0; i < a.size(); i++) {
    //     result.push_back(a[i] + " " + b[i]);
    // }
    // return result;
}