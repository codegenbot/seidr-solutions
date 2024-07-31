```cpp
#include <string>
using namespace std;

int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && s.back() == 'y')) {
            count++;
        }
    }
    cout << "Number of vowels: " << count << endl;
}