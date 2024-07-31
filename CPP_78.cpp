#include <cassert>

int stringToHex(string input) { 
    if(input.empty()) {
        return 0;
    }
    int result = 0;
    for(char c : input) {
        result += (int)c;
    }
    return result;
}

int testMain() {
    assert(stringToHex("") == 0);
    return 0;
}