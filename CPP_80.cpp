```cpp
#include <iostream>
using namespace std;

bool is_happy(const string& str) {
    int n = str.length();
    for(int i=0;i<n-1;++i){
        if(str[i] == '3' && (str[i+1] == '4' || str[i+1] == '7')) return false;
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    if(is_happy(s)) 
        cout << "The input string is happy.\n";
    else
        cout << "The input string is not happy.\n";
    return 0;
}