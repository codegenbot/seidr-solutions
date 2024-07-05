#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    string rev = "";
    for(int i=str.length()-1; i>=0; i--){
        rev += str[i];
    }
    
    if(is_palindrome(str)) {
        return str + rev;
    } else {
        int left = 0, right = rev.length() - 1;
        
        while(left < right) {
            if(str[left] != rev[right]) {
                break;
            }
            left++;
            right--;
        }
        
        return str.substr(0, left+1) + rev;
    }
}