Here is the completed code:

```cpp
#include <iostream>
using namespace std;

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            result += (char)(c - 32);
        else if(c >= 'A' && c <= 'Z')
            result += (char)(c + 32);
        else
            result += c;
    }
    return result;
}

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string res = flip_case(str);
    cout << "Flip case of the input string is: " << res << endl;
    return 0;
}