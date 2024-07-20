Here is the completed code:

```cpp
#include <string>
using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    string last_char = txt.substr(txt.size() - 1);
    for (char c : txt) {
        if (c == ' ') {
            if (last_char == "") return true;
            break;
        }
    }
    return isalpha(last_char[0]);
}