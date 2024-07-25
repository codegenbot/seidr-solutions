#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

std::vector<std::string> all_prefixes(std::string str) {
    std::vector<std::string> result;
    std::string prefix = "";
    for (char c : str) {
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}

bool are_equal(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}