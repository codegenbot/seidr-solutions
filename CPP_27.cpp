#include<string>
using namespace std;

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z') // lowercase character
            result += toupper(c);
        else if(c >= 'A' && c <= 'Z') // uppercase character
            result += tolower(c);
        else // special characters or digits
            result += c;
    }
    return result;
}