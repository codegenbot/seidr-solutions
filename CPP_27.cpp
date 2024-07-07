```cpp
#ifndef MYCODE_H
#define MYCODE_H

#include <string>
using namespace std;

string flip_case(string str) {
    string result = "";
    for (char c : str) {
        if (islower(c)) {
            result += toupper(c);
        } else if (isupper(c)) {
            result += tolower(c);
        } else {
            result += c;
        }
    }
    return result;

}
#endif  // MYCODE_H