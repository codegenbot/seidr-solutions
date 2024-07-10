Here is the solution:

```cpp
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int count_distinct_characters(string str) {
    vector<char> charSet;
    for (char c : str) {
        if (c >= 'a' && c <= 'z') c = tolower(c);
        else if (c >= 'A' && c <= 'Z') c = tolower(c);
        auto pos = find_if(charSet.begin(), charSet.end(),
                [c](char ch) { return ch == c; });
        if (pos == charSet.end()) {
            charSet.push_back(c);
        }
    }
    return charSet.size();
}