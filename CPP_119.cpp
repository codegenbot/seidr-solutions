```c++
#include <string>
#include <vector>

int main() {
    assert (match_parens({std::string(")"), std::string("(")}) == "Yes" );
    assert (match_parens({std::string("("), std::string(")")}) == "No");
}

std::string match_parens(std::vector<std::string> lst){
    string s1 = lst[0];
    string s2 = lst[1];

    int openCount = 0;
    int closeCount = 0;

    for(char c : s1) {
        if(c == '(') {
            openCount++;
        } else if(c == ')') {
            closeCount++;
        }
    }

    for(char c : s2) {
        if(c == '(') {
            openCount++;
        } else if(c == ')') {
            closeCount++;
        }
    }

    if(openCount > closeCount) return "No";
    else if(closeCount > openCount) return "No";
    else return "Yes";
}