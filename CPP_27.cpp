
/*
For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
>>> flip_case("Hello")
"hELLO"
*/
#include<stdio.h>
#include<string>
using namespace std;
string filp_case(string str){
    string result = "";
    for (int i = 0; i < str.size(); i++) {
        if (islower(str[i])) {
            result += toupper(str[i]);
        } else {
            result += tolower(str[i]);
        }
    }
    return result;
}