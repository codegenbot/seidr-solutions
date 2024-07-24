```cpp
#include <algorithm>
#include <string>

using namespace std;

bool same_chars(string s0, string s1) {
    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());

    return equal(s0.begin(), s0.end(), s1.begin()) ? true : false;
}