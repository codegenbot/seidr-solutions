```cpp
#include <string>
#include <iostream>

int main() {
    std::string input;
    std::cin >> input;
    std::cout << (correct_bracketing(input) ? "true" : "false") << std::endl;
}

bool correct_bracketing(const std::string& brackets){
    int count = 0;
    for(int i=0; i<brackets.size(); i++){
        if(brackets[i] == '(')
            count++;
        else
            if(count <= 0)
                return false;
            else
                count--;
    }
    return count==0;
}