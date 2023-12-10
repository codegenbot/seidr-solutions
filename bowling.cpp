```cpp
#include <iostream>
#include <string>
using namespace std;

int calculateScore(string bowls) {
    int score = 0;
    int frame = 0;
    int bowl = 0;
    int frames[10] = {0};

    for (int i = 0; i < bowls.length(); i++) {
        if (bowls[i] == 'X') {
            frames[frame] = 10;
            frame++;
        } else if (bowls[i] == '/') {
            frames[frame] = 10 - (bowls[i-1] - '0');
            frame++;
        } else if (bowls[i] == '-') {
            frames[frame] = 0;
            frame++;
        } else {
            frames[frame] += bowls[i] - '0';
            if (bowl % 2 != 0) {
                frame++;
            }
        }
        bowl++;
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
        if (frames[i] == 10) {
            if (bowl < bowls.length() && bowls[bowl] == 'X') {
                score += 10;
            } else if (bowl < bowls.length() && bowls[bowl+1] == '/') {
                score += 10 - (bowls[bowl] - '0');
            } else if (bowl < bowls.length()) {
                score += bowls[bowl] - '0';
            }
            if (bowl < bowls.length() && bowls[bowl+1] == 'X') {
                score += 10;
            } else if (bowl < bowls.length() && bowls[bowl+1] == '/') {
                score += 10 - (bowls[bowl] - '0');
            } else if (bowl < bowls.length()) {
                score += bowls[bowl+1] - '0';
            }
        } else if (frames[i] == 20) {
            if (bowl < bowls.length() && bowls[bowl] == 'X') {
                score += 10;
            } else {
                score += bowls[bowl] - '0';
            }
        }
        bowl += 2;

        if (bowl >= bowls.length()) {
            break;
        }
    }

    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    int score = calculateScore(bowls);
    cout << score << endl;
    return 0;
}
```