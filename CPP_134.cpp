#include <iostream>
#include <string>
#include <cassert> // Include cassert header for assert function

using namespace std;

bool check_if_last_char_is_a_letter(const string& txt) {
    if(txt.empty())
        return false;

    char lastChar = txt.back();
    if(isalpha(lastChar)){
        if(txt.find_last_of(" ") == txt.length()-1)
            return true;
    }

    return false;
}

int main(){
    assert(check_if_last_char_is_a_letter("apple pi e ") == false); // Use assert from cassert header

    return 0;
}