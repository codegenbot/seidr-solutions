#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str)) return str; // If input string is already a palindrome, just return it

    int i = 0;
    while(i < str.length() && str[i] == ' ') i++; // Skip leading spaces
    for(int j=str.length()-1; j>=i && str[j] == ' '; j--) // Skip trailing spaces
        str.erase(j,1);

    string rev_str = str.substr(i).reverse(); // Reverse the remaining part of the string
    return str + rev_str; // Add reversed string to the original string
}