```cpp
#include <vector>
#include <string>
using namespace std;

string find_max(const vector<string>& words) {
    int max_count = 0;
    string max_word;
    for (int i = 0; i < words.size(); i++) {
        const auto& word = words[i];
        int count = 0;
        for (const auto& c : word) {
            if (c != ' ') {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_word = word;
        }
    }
    return max_word;
}
```