Here is the solution:

```cpp
#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    size_t pos = 0;
    while ((pos = s.find(" ")) != string::npos) {
        string word = s.substr(0, pos);
        sort(word.begin(), word.end());
        if (!result.empty()) {
            result += " ";
        }
        result += word;
        s.erase(0, pos + 1);
    }
    if (!s.empty()) {
        sort(s.begin(), s.end());
        result += s;
    }
    return result;
}