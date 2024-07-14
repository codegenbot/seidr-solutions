#include <vector>
using namespace std;

int bowling(string s) {
    int score = 0;
    int roll = 0;
    bool spare = false;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            int temp = stoi(s.substr(0, i));
            if (temp > 1) score += 10 + temp;
            else score += 10;
            roll++;
            spare = false;
            s = s.substr(i+1);
        } else if (s[i] == 'X') {
            score += 10;
            roll++;
            spare = true;
            s = s.substr(1);
        }
    }
    
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            int temp = stoi(s.substr(0, i+1));
            if (temp == 10) score += 10;
            else {
                if (roll >= 9 && spare) score += 20 - temp;
                else score += temp;
            }
            roll++;
            s = s.substr(i+1);
        } else if (s[i] == '-') {
            break;
        }
    }
    
    return score;
}