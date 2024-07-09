```cpp
#include <string>
#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);
    string new_result;  
    for(char c : text){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && 
           tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && 
           tolower(c) != 'o' && tolower(c) != 'u'){
            new_result += c;
        }
    }
    cout << "String after removing vowels: " << new_result << endl;
    return 0;
}