Here is the C++ solution:

#include <string>
using namespace std;

string camelCase(string str) {
    string result = "";
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '-') {
            ++i;
            while (i < str.size() && str[i] == '-') {
                ++i;
            }
            if (i < str.size()) {
                result += toupper(str[i]);
            }
        } else if (result != "") {
            result += tolower(str[i]);
        } else {
            result += toupper(str[i]);
        }
    }
    return result;
}