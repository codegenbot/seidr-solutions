```
#include<iostream>
using namespace std;
bool is_palindrome(string text){
    int i = 0, j = text.length() - 1;
    while (i < j) {
        if (text[i] != text[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main(){
    string text;
    cin>>text;
    if(is_palindrome(text)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
```