#include <iostream>
#include <vector>
#include <string>

std::string match_parens(std::vector<std::string> lst) {
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
    std::vector<std::string> input;
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    
    for(int i=0; i<n; i++){
        std::string str;
        std::cout << "Enter string " << i+1 << ": ";
        std::getline(std::cin, str);
        input.push_back(str);
    }
    
    std::cout << match_parens(input) << std::endl;
    
    return 0;
}