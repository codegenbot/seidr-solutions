#include<iostream>
#include<vector>
#include<algorithm>

vector<int> parse_nested_parens(string paren_string) {
    vector<int> depths;
    int depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            depths.push_back(depth);
        } else if (c == ')') {
            depth--;
        }
    }
    int max_depth = 0;
    for (int d : depths) {
        max_depth = max(max_depth, d);
    }
    return depths;
}

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}