#include <iostream>
#include <vector>
#include <string>
using namespace std;

std::string concatenate(vector<std::string> strings){
    std::string result = "";
    for (const auto &s : strings) {
        result += s;
    }
    return result;
}