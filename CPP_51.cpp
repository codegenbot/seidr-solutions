```cpp
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void mainFunc() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);
    string new_result = remove_vowels(text);  
    cout << "String after removing vowels: " << new_result << endl;
}

string remove_vowels(string str) {
    string new_str;  
    for(char c : str){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && 
           tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && 
           tolower(c) != 'o' && tolower(c) != 'u'){
            new_str += c;
        }
    }
    return new_str;
}