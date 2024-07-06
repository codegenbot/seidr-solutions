#include <iostream>
#include <string>

using namespace std;

int remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U'){
            result += c;
        }
    }
    return 0; 
}

int main(){
    string input;
    cout << "Enter a string: ";
    cin >> input;
    assert (remove_vowels(input) == "");
    return 0;
}