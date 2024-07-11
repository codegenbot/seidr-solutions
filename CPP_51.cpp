```cpp
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

string remove_vowels(string text){
    string result;
    for(auto c : text) {
        if(c >= 'a' && c <= 'z'){
            if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
                result.push_back(tolower(c)); 
        } else {
            result.push_back(c); 
        }
    }
    return result;
}

int main() {}