#include <string>
#include <cctype>

string remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && 
           std::tolower(c) != 'a' && std::tolower(c) != 'e' && std::tolower(c) != 'i' && 
           std::tolower(c) != 'o' && std::tolower(c) != 'u'){
            result += c;
        }
    }
    return result;
}

int main(){
    assert (remove_vowels("ybcd") == "ybcd");
    // your code here
    return 0;
}