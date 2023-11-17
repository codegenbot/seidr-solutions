/*
For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
>>> flip_case("Hello")
"hELLO"
*/
#include<stdio.h>
#include<string.h>
using namespace std;
string filp_case(string str){
    int i;
    for(i=0;i<str.length();i++){
        if(str[i]>=65 && str[i]<=90){
            str[i]=str[i]+32;
        }
        else if(str[i]>=97 && str[i]<=122){
            str[i]=str[i]-32;
        }
    }
    return str;
}
int main(){
    string str;
    printf("Enter the string\n");
    getline(cin,str);
    cout<<filp_case(str);
    return 0;
}
