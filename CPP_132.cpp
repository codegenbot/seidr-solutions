#include <string>
using namespace std;

bool is_nested(string str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') count++;
        else if (c == ']') {
            if (count > 0) count--;
            else return false; // Closing bracket without a corresponding opening one
        }
    }
    return count > 0; // Opening brackets without closing ones
}