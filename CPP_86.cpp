```cpp
#include <iostream>
using namespace std;

string anti_shuffle(const string& str) {
    if (str.length() <= 1) {
        return "";
    }
    for(auto it = 1; it < str.length(); ++it) {
        if (str[it] == str[0]) {
            return str;
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