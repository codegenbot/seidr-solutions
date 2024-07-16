#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    std::for_each(brackets.begin(), brackets.end(), [&](char c) {
        if(c == '<'){
            count++;
        } else if(c == '>'){
            count--;
        }
        if(count < 0){
            return false;
        }
    });
    return count == 0;
}

int main() {
    assert (not (correct_bracketing("<><><<><>><>>><>")));
    return 0;
}