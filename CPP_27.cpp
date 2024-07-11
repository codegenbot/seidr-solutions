#include<string>
using namespace std;

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c>=97 && c<=122) // check for lowercase letter
            result += toupper(c);
        else if(c>=65 && c<=90) // check for uppercase letter
            result += tolower(c);
        else 
            result+=c;
    }
    return result;
}