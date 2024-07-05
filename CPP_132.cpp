#include <string>  // Include this to use std::string
using namespace std;

bool is_nested(string str) {
    int openCount = 0, nestedCount = 0;
    for(char c : str) {
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

#include <iostream>
#include <assert.h>

int main() {
    assert (is_nested("[]") == false);
    assert (is_nested("[[]]") == true);
    assert (is_nested("[[][]]") == true);
    assert (is_nested("]]]]]]]]") == false);
    cout << "All test cases passed.\n";
    return 0;
}