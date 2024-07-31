#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> a = {"grunt", "trumpet", "prune", "gruesome"};
    vector<string> b = filter_by_substring(a, "run");
    
    assert(a == b);
    
    return 0;
}