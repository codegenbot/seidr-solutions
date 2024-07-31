```cpp
#include <iostream>
using namespace std;

const char* anti_shuffle(const string& str) {
    if (str.length() <= 1) {
        return NULL;
    }
    for(auto it = str.begin() + 1; it != str.end(); ++it) {
        if (*it == str[0]) {
            return NULL; 
        }
    }
    const char* res = str.c_str();
    return res;
}

int main() { 
    string str = ""; 
    cout << "Enter a string: ";
    cin >> str;
    const char* result = anti_shuffle(str).c_str();
    if(result==NULL)cout<<"No valid shuffle found."<<endl;
    else cout << "Result: " << result << endl;
    return 0;
}