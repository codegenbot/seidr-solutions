#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str)) return str; 

    int i = 0;
    while(i < str.length() && str[i] == ' ') i++; 
    for(int j=str.length()-1; j>=i && str[j] == ' '; j--) 
        str.erase(j,1);

    string rev_str = string(str.substr(i)) + string(str.rbegin(), str.rend());
    return str+rev_str; 
}