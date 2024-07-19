#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> parse_nested_parens(std::string s){
    int depth = 0;
    std::vector<int> depths;

    for(char c : s){
        if(c == '('){
            depth++;
        } else if(c == ')'){
            depths.push_back(depth);
            depth--;
        }
    }

    return depths;
}

assert(issame(parse_nested_parens("(()(())((())))"), std::vector<int>({4})));
return 0;