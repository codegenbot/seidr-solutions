#include <iostream>
#include <vector>
#include <string>

std::string match_parens(std::vector<std::string> lst){
    int open = 0, close = 0;
    for(int i=0; i<lst.size(); i++){
        for(char c: lst[i]){
            if(c == '(') open++;
            else if (c == ')') close++;
        }
    }
    return (open==close) ? "Yes" : "No";
}

int main(){
    std::vector<std::string> lst;
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    
    for(int i = 0; i < n; ++i){
        std::string s;
        std::cout << "Enter string " << i+1 << ": ";
        std::getline(std::cin, s);
        lst.push_back(s);
    }
    
    std::cout << "Do the strings match? " << match_parens(lst) << std::endl;
    
    return 0;
}