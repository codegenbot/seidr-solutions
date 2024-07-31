#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool issame(const vector<int>& vec1, const vector<int>& vec2){
    if (vec1.size() != vec2.size()) {
        return false;
    }
    
    for (int i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> parse_nested_parens(string paren_string);

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    
    return 0;
}

vector<int> parse_nested_parens(string paren_string) {
    <UNMODIFIED>
}