Here is the modified code:

```cpp
#include <string>

int bowling(string s) {
    int score = 0;
    int current_frame = 0;
    vector<int> frames;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (current_frame < 9 ? 10 : 0);
            current_frame++;
        } else if (c == '/') {
            score += 10 - frames.back();
            current_frame++;
            frames.pop_back();
        } else {
            int pins = c - '0';
            score += pins;
            frames.push_back(pins);
        }
    }

    return score;
}