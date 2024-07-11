#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int total = 0;
    int frame = 0;
    int frameScore = 0;

    for (char c : s) {
        if (c == 'X') {
            total += 10 + frameScore;
            frameScore = 10;
            if (frame < 9) {
                frame++;
            }
        } else if (c == '/') {
            total += 10 - (s[frame*2 - 1] - '0') + frameScore;
            frameScore = 10;
            if (frame < 9) {
                frame++;
            }
        } else if (c != '-') {
            frameScore = (c - '0');
            total += frameScore;
            if (frame < 9) {
                if (frameScore == 10) {
                    frame++;
                } else {
                    frameScore = 0;
                }
            }
        }
    }
    
    std::cout << total << std::endl;

    return 0;
}