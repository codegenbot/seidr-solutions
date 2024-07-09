```cpp
#include <string>
using namespace std;

bool is_nested(string str) {
    int count = 0;
    bool result = true;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']') {
            if (count > 0) {
                count--;
            } else {
                result = false;
                break;
            }
        }
    }
    return !result && count > 0;
}