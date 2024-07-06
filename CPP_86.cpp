Here is the solution:

```cpp
#include <string>
#include <algorithm>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
            continue;
        }
        string word = "";
        bool is_space = false;
        for (int j = i; j < s.length(); j++) {
            if (is_space) break;
            if (s[j] == ' ') {
                is_space = true;
                break;
            }
            word += s[j];
        }
        string new_word = "";
        for (char c : word) {
            new_word += to_string(c);
        }
        sort(new_word.begin(), new_word.end());
        result += new_word;
        i -= 1;
    }
    return result;
}