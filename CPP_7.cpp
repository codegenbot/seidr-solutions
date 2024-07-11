bool issame(vector<string> a, vector<string> b);

vector<string> filter_by_substring(vector<string> strings, string substring);

#include <iostream>
#include <vector>
#include <string>
#include <cassert>

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

int main() {
    vector<string> input = {"apple", "banana", "cherry", "date"};
    vector<string> expected_output = {"apple", "date"};

    vector<string> filtered_output = filter_by_substring(input, "e");

    assert(issame(filtered_output, expected_output));

    return 0;
}