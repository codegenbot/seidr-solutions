#include <iostream>
#include <cctype>
using namespace std;

string filp_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            result += toupper(c);
        else
            result += tolower(c);
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string flipped = filp_case(str);
    cout << "Flipped case: " << flipped << endl;
    return 0;
}