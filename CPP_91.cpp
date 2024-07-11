```cpp
#include <string>

int is_bored(std::string S) {
    int count = 0;
    std::string sentence;
    for (char c : S) {
        if (c == '.' || c == '?' || c == '!') {
            if (!sentence.empty() && sentence[0] == 'I' && sentence.size() > 1) {
                count++;
            }
            sentence.clear();
        } else {
            sentence += c;
        }
    }
    return count;