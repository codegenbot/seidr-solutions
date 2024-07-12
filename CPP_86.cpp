Here is the completed code:

```cpp
#include <algorithm>
#include <string>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    size_t prev = 0;
    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || isspace(s[i])) {
            string word = s.substr(prev, i - prev);
            sort(word.begin(), word.end());
            result += word + (i < s.size() ? " " : "");
            prev = i;
        }
    }
    return result;
}