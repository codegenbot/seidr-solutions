```cpp
#include <iostream>
using namespace std;

string anti_shuffle(const string& str) {
    if (str.length() <= 1) {
        return "";
    }
    for(int i = 1; i < str.length(); ++i) {
        if (str[i] == str[0]) {
            return "";
        }
    }
    return str;
}

int main() { 
    string str = ""; 
    cout << "Enter a string: ";
    getline(cin, str);
    string result = anti_shuffle(str);
    if(result.empty())cout<<"No valid shuffle found."<<endl;
    else cout << "Result: " << result << endl;
    return 0;
}