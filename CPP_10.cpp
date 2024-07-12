#include<string>
using namespace std;

string make_palindrome(string str) {
    string rev = "";
    for(int i=str.length()-1; i>=0; i--) {
        rev += str[i];
    }
    
    int i=0, j=str.length()-1;
    while(i<=j && str[i]==rev[j]) {
        i++;
        j--;
    }
    
    return str.substr(0,i) + rev;
}