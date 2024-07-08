#include <iostream>
#include <string>

bool correct_bracketing(const std::string& str) {
    int count = 0;
    for(int i=0;i<str.length();i++){
        if(str[i] == '(')count++;
        else if(str[i] == ')')if(count > 0)count--;else return false;
    }
    return count == 0;
}

int main() {
    assert(!correct_bracketing("()()(()())()))()"));
    std::cout << "Program execution completed successfully." << std::endl;
    return 0;
}