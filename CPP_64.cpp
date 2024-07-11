```cpp
#include <string>
using namespace std;

int vowels_count(string s) {
    int count = 0;
    int y_index = s.find('y');
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && y_index == s.size() - 1)) {
            count++;
        }
    }
    return count;
}