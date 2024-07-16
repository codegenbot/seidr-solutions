#include<stdio.h>
#include<string>
using namespace std;
string filp_case(string str){
    string result = str;
    for (int i = 0; i < result.length(); ++i) {
        if (islower(result[i])) {
            result[i] = toupper(result[i]);
        } else if (isupper(result[i])) {
            result[i] = tolower(result[i]);
        }
    }
    return result;
}