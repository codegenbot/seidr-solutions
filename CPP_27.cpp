#include <string>
using namespace std;

string flip_case(string str) {
    string flipped_str = "";
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            flipped_str += toupper(str[i]);
        } else if (isupper(str[i])) {
            flipped_str += tolower(str[i]);
        } else {
            flipped_str += str[i];
        }
    }
    return flipped_str;
}