
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

int main() {
    vector<pmr::string> input = {"( ) (( )) (( )( ))"};
    vector<pmr::string> expected_output = {"()", "(())", "(()())"};

    assert(issame(input, expected_output));

    return 0;
}