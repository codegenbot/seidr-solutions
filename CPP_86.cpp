```cpp
#include <iostream>
using namespace std;

const char* anti_shuffle(const string& str) {
    if (str.length() <= 1) {
        return NULL;
    }
    for(auto it = 1; it < str.length(); ++it) {
        if (str[it] == str[0]) {
            return NULL; 
        }
    }
    const char* res = str.data();
    return res;
}

int main() { 
    string str = ""; 
    cout << "Enter a string: ";
    cin >> str;
    const char* result = anti_shuffle(str);
    if(result==NULL)cout<<"No valid shuffle found."<<endl;
    else cout << "Result: " << result << endl;
    return 0;
}