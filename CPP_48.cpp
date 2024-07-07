#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string text){
    int start = 0;
    int end = text.length() - 1;

    while(start < end){
        if(text[start] != text[end])
            return false;
        start++;
        end--;
    }

    return true;
}

int main(){
    string s; 
    cin >> s;
    cout << (is_palindrome(s) ? "Yes" : "No") << endl;
    return 0;
}