#include <iostream>
#include <string>
using namespace std;

int bowlingScore(string s) {
    int total = 0;
    bool strike = false;
    string frame[11];
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            frame[i/2].push_back(s[i]);
            if (i/2 >= 4 && frame[(i-1)/2][0] == 'X' && frame[(i-1)/2][1] == 'X') 
                strike = true;
        } else if (s[i] == '+') {
            int bonus = stoi(frame[i/2].substr(0,frame[i/2].length()-1));
            total += 10 + bonus;
            for (int j = i+1; j < s.length(); j++) 
                if (s[j] == '/') break;
            frame[i/2].clear();
        } else {
            frame[i/2].push_back(s[i]);
        }
    }

    for (int i = 0; i < 10; i++) {
        if (!strike) total += stoi(frame[i]) + stoi(frame[i+1]);
        else if (i == 9) total += 10;
        strike = false;
    }

    return total;
}

int main() {
    int score = bowlingScore("X/XXXX/8+5,X");
    cout << "The score is: " << score << endl;
    return 0;
}