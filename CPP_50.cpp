```
#include <string>
using namespace std;

void encode_shift(string s){
    int i;
    for (i=0;i<s.length();i++)
    {
        int w=((int)s[i]-5-(int)'a')%26+(int)'a';   
        s[i]=w;
    }
}

void decode_shift(string s){
    //TODO: Implement decode_shift function here
}

int main(){
    string s = "hello";
    encode_shift(s);
    cout << s << endl;
    decode_shift(s);
    return 0;
}
```