```c++
#include <string>

int main() {
    int score = 0;
    int roll = 0;

    for (char c : "1-3/5x7/8-2/") { 
        if (c == '/') {
            if (roll > 9)
                score += 10;
            else
                score += roll;
            roll = 0;
        } else if (isdigit(c)) {
            roll *= 10;
            roll += c - '0';
        }
    }

    if (roll > 9)
        score += 10;
    else
        score += roll;

    return score; 
}