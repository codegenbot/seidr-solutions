```cpp
#include <iostream>
#include <string>
using namespace std;

string anti_shuffle(const string str) {
    string result = "";
    int i = str.length() - 1;
    while (i >= 0) {
        int j = i;
        for (; j >= 0 && str[j] == str[i]; --j)
            --i;
        result += str.substr(j + 1, i - j + 1);
        --i;
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << "Anti-shuffled sentence: " << anti_shuffle(str) << endl;
    return 0;
}