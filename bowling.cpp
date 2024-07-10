#include <iostream>
#include <string>
#include <vector>

using namespace std;

int calculateBowlingScore(string input) {
    int score = 0;
    int frame = 0;
    int ball = 0;
    vector<int> frames(10, 0);

    for (char c : input) {
        if (c == 'X') {
            frames[frame] = 10;
            frame++;

            if (frame < 10) {
                frames[frame] = 10;
                frame++;
            }
		} else if (c == '/') {
		    frames[frame] = 10 - frames[frame - 1];
		    frame++;

		    if (frame < 10) {
		        frames[frame] = (c - '0');
		        frame++;
		    }
		} else if (c == '-') {
		    // No pins knocked down, continue to the next ball
		} else {
		    frames[frame] += c - '0';
		    
		    if (ball % 2 == 1 || c == '9') {
		        frame++;
		    }
		}
	}

	for (int i = 0; i < 10; i++) {
	    score += frames[i];
	}

	return score;
}

int main() {
    string input;
    cin >> input;
    cout << calculateBowlingScore(input) << endl;
    return 0;
}