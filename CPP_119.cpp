#include <iostream>
#include <string>
#include <vector>

std::string match_parens(std::vector<std::string> lst) {
    int countOpen = 0;
    int countClose = 0;

    for(const string& s : lst){
        for(char c : s){
            if(c == '(') countOpen++;
            else if(c == ')') countClose++;
        }
    }

    if(countOpen == countClose) return "Yes";
    else return "No";
}

int main() {
    std::vector<std::string> input = {")(", "((()))"};
    assert(match_parens(input) == "Yes");
    return 0;
}