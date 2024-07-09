```
#include<iostream>
using namespace std;

int custom_str_len(string str){
    return str.length();
}

int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Length of the string is: " << custom_str_len(s) << endl;
    return 0;
}