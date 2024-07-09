Here is the solution:

```cpp
#include <string>
using namespace std;

string fix_spaces(string text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (i > 0 && result.back() == ' ' && (result.length() < 2 || result.length() % 3 != 0)) {
                result.pop_back();
            } else {
                if (result.length() >= 2 && result.back() == '-' && result[result.length()-2] == ' ') {
                    result.erase(result.length()-1, 1);
                }
                result += '_';
            }
        } else {
            result += text[i];
        }
    }
    return result;
}