```cpp
#include <iostream>
using namespace std;

const char* anti_shuffle(const string& str) {
    if (str.length() <= 1) {
        return NULL;
    }
    int i = 1;
    while (i < str.length()) {
        if (str[i] == str[0]) {
            return NULL; 
        }
        i++;
    }
    return str.c_str();
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    const char* res = anti_shuffle(str);
    if(res==NULL)cout<<"No valid shuffle found."<<endl;
    else cout << "Result: " << res << endl;
    return 0;
}