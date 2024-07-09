Here is the completed code:

```cpp
#include<stdio.h>
#include<string>
using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    for(int i = 0; i < txt.length() - 1; i++) {
        if(!isspace(txt[i])) {
            if(i == txt.length() - 2 || !isalpha(txt[txt.length()-1])) {
                return false;
            }
            break;
        }
    }
    return true;
}