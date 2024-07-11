#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b);
vector<string> filter_by_substring(vector<string> strings, string substring);

bool issame(vector<string> a, vector<string> b){
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

int main(){
    vector<string> input = {"apple", "banana", "cherry", "orange"};
    vector<string> expected_output = {"apple", "cherry"};

    vector<string> filtered = filter_by_substring(input, "p");

    assert(issame(filtered, expected_output));

    return 0;
}