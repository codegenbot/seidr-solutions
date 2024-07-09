#include <vector>
#include <string>

bool match_parens(std::vector<std::string> lst) {
    int open = 0, close = 0;
    for(auto s : lst){
        for(char c : s){
            if(c == '(') open++;
            else if(c == ')') close++;
        }
    }
    return (open == close) ? true : false;
}

int main() {
    assert(match_parens({{"(", ")"} }) == true );
    return 0;
}