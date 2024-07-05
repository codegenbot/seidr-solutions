#include <iostream>
#include <string>
#include <cassert>

bool is_nested(const std::string &str) {
    int openCount = 0, nestedCount = 0;
    for(char c : str){
        if(c == '[') {
            openCount++;
        } else if(c == ']') {
            if(openCount > 0) {
                openCount--;
                nestedCount++;
            }
        }
    }
    return nestedCount > 1;
}

int main() {
    assert(is_nested("]]]]]]]]") == false);
    assert(is_nested("[][[]]") == true);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}