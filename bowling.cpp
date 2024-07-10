#include <vector>
using namespace std;

int bowlingScore(string frames) {
    int score = 0;
    int currentFrame = 0;
    for (char frame : frames) {
        if (frame == 'X') { // strike
            score += 10 + getBonus(currentFrame);
            currentFrame++;
        } else if (frame == '/') { // spare
            score += 10 - getScore(currentFrame) + getBonus(currentFrame);
            currentFrame++;
        } else { // normal frame
            int pins = frame - '0';
            if (currentFrame < 9 && frames[currentFrame+1] == 'X') {
                score += 10 + pins;
                currentFrame++;
            } else if (currentFrame < 9 && frames[currentFrame+1] == '/') {
                score += 10 - getScore(currentFrame) + pins;
                currentFrame++;
            } else {
                score += pins;
            }
        }
    }
    return score;
}

int getBonus(int frame) {
    int bonus = 0;
    for (int i = frame; i < 10; i++) {
        if (frames[i] == 'X') {
            bonus += 10;
        } else if (frames[i] == '/') {
            bonus += 10 - getScore(i);
        } else {
            int pins = frames[i] - '0';
            bonus += pins;
        }
    }
    return bonus;
}

int getScore(int frame) {
    if (frame < 9 && frames[frame] == 'X') {
        return 10;
    } else if (frame < 9 && frames[frame] == '/') {
        int i = frame + 1;
        while (i < 10 && frames[i] != 'X' && frames[i] != '/') {
            i++;
        }
        return i - frame - 1;
    } else {
        return 0;
    }
}

int main() {
    string frames;
    cout << "Enter the bowling frames: ";
    cin >> frames;
    cout << "The score is: " << bowlingScore(frames) << endl;
    return 0;
}