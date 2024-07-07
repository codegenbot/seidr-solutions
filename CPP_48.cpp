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

int main2(){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    if(is_palindrome(s))
        cout << s << " is palindrome.\n";
    else
        cout << s << " is not palindrome.\n";
    return 0;
}