
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
using namespace std;

bool issame(vector<pmr::string> a, vector<pmr::string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<pmr::string> separate_paren_groups(vector<pmr::string> input) {
    vector<pmr::string> result;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == "(") {
            int count = 1;
            pmr::string group = "";
            while (count > 0) {
                i++;
                if (input[i] == "(") {
                    count++;
                } else if (input[i] == ")") {
                    count--;
                }
                group += input[i];
            }
            result.push_back(group);
        }
    }
    return result;
}

int main() {
    vector<pmr::string> input = {"( ) (( )) (( )( ))"};
    vector<pmr::string> expected_output = {"()", "(())", "(()())"};

    assert(issame(separate_paren_groups(input), expected_output));

    return 0;
}