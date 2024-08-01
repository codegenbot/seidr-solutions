#include <string>
#include <cctype>
#include <cassert>

string encode(string message){
    for(char &c : message){
        if(isalpha(c)){
            c = islower(c) ? toupper(c) : tolower(c);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = static_cast<char>(c + 2);
            }
        }
    }
    return message;
}

int main() {
    assert(encode("hello") == "hEllo");
    assert(encode("world") == "wOrld");

    return 0;
}
