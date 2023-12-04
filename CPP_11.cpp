```
#include<iostream>
#include<string>
using namespace std;
string string_xor(string a,string b) {
    string result = "";
    for (int i = 0;i < a.length();i++) {
        if (a[i] == '1' && b[i] == '1') {
            result += "0";
        } else if (a[i] == '1' || b[i] == '1') {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}
int main() {
    string a,b;
    cin>>a>>b;
    cout<<string_xor(a,b)<<endl;
    return 0;
}
```