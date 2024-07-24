#include <iostream>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str)) return str;
    for(int i=str.size()-1; i>=0; --i){
        if(!is_palindrome(str + string(1, str[i]))){
            return str + string(str.rbegin(), str.rend());
        }
    }
    return str;
}

int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin,s);
    cout << "Shortest palindrome that begins with the supplied string is: " << make_palindrome(s) << endl;
    return 0;
}