#include <iostream>
#include <cstring>

int countCharacters(const std::string& str) {
    return str.size();
}

int main(){
    assert (countCharacters("asdasnakj") == 9);
    return 0;
}