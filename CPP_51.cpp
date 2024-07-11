```cpp
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

string remove_vowels(string text){
    string result;
    for(auto c : text) {
        if(isalpha(c)){
            if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
                result += tolower(c); 
            }
        } else {
            result += c; 
        }
    }
    return result;
}

int main() {}