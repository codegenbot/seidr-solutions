```cpp
#include <string>
using namespace std;

string remove_vowels(string text) {
    string str = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && text[i] != 'o' && text[i] != 'u' 
           && tolower(text[i]) != 'a' && tolower(text[i]) != 'e' && tolower(text[i]) != 'i' && tolower(text[i]) != 'o' && tolower(text[i]) != 'u')
            str += text[i];
    }
    return str;
}

int main() {
    cout << remove_vowels("Hello, World!") << endl;
}