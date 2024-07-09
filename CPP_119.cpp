#include <iostream>
#include <vector>
#include <string>

std::string match_parens(std::vector<std::string> lst){
    int open = 0, close = 0;
    for(int i=0; i<lst.size(); i++){
        for(char c: lst[i]){
            if(c == '(') open++;
            else close++;
        }
    }
    return (open==close) ? "Yes" : "No";
}

int main() {
    std::vector<std::string> strings = {"(Hello", ")World"};
    std::cout << match_parens(strings) << std::endl;
    return 0;
}