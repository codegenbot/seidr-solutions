```cpp
#include <iostream>
using namespace std;

string anti_shuffle(const string& str) {
    if (str.length() <= 1) {
        return "";
    }
    for(int i = 1; i < str.length(); ++i) {
        if (str[i] == ' ') { 
            return "";
        }
    }
    return str;
}

int main() { 
    string str = ""; 
    cout << "Enter a string: ";
    getline(cin, str);
    const char* result = anti_shuffle(str).c_str();
    if(result=="")cout<<"No valid shuffle found."<<endl;
    else cout << "Result: " << result << endl;
    return 0;
}