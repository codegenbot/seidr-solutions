#include <vector>
#include <iostream>
#include <string>

using namespace std;

string toCamelCase(string str) {
    string result = "";
    size_t start = 0;
    
    for (size_t i = 0; i <= str.size(); i++) {
        if (i == str.size() || str[i] == '-') {
            size_t len = i - start;
            if (len > 0) {
                result += toupper(str.substr(start, len)[0]);
                if (len > 1)
                    result += tolower(str.substr(start + 1, len - 1));
            }
            start = i + 1;
        }
    }
    
    return result;
}

int main() {
    string str;
    while (cin >> str) {
        cout << toCamelCase(str) << endl;
    }
    return 0;
}