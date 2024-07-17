Here is the solution:

```cpp
int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    bool lastRoll = false;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '/') {
            if(roll == 1) {
                lastRoll = true;
            }
            else {
                roll++;
            }
        }
        else if(s[i] != 'X') {
            score += (s[i] - '0') * 10 / (roll + 1);
            if(lastRoll) {
                return -1; // Invalid input
            }
        }

    }

    while(roll < 10) {
        if(s[s.length() - 1] == 'X' || s[s.length() - 1] != '0') {
            score += 10;
            break;
        }
        else {
            score += (10 - roll) * 10 / (10 - roll);
            break;
        }

    }

    return score;

}