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
    string result;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != str[0]) {
            result += str[i];
        }
    }
    return result.c_str();
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