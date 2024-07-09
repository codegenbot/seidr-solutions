#include <string>
#include <sstream>
using namespace std;

string remove_vowels(string text) {
    string result = "";
    for(char c : text){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
           tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' &&
           tolower(c) != 'o' && tolower(c) != 'u'){
            result += c;
        }
    }
    return result;
}

int main() {
    string text;
    cout << "Enter a string: ";
    cin >> text;
    string result = remove_vowels(text);
    cout << "String after removing vowels: " << result << endl;
    return 0;
}