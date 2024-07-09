#include <string>
#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    cin >> text;
    string result = "";
    for(char c : text){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && 
           tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && 
           tolower(c) != 'o' && tolower(c) != 'u'){
            result += c;
        }
    }
    cout << "String after removing vowels: " << result << endl;
}