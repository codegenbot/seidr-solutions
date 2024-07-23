```cpp
#include <algorithm>
using namespace std;

bool is_happy(string s) {
    return s == sort(s.begin(), s.end());
}