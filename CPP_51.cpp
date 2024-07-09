```cpp
#include <iostream>
#include <string>

using namespace std;

string remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(strchr("aeiouAEIOU",c) == NULL)
            result += c;
    }
    return result;
}

int main(){
    assert (remove_vowels("ybcd") == "ybcd");
    return 0;
}