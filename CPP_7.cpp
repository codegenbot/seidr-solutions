#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool is_same(string a, string b){
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert(is_same("apple", "apple"));
    assert(!is_same("apple", "banana"));

    assert(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") == vector<string>{"grunt", "prune"});

    return 0;
}