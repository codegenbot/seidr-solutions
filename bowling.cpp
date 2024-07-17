#include <iostream>
#include <string>

using namespace std;

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (10 - roll);
            }
            roll = 0;
        } else if (c >= '1' && c <= '9') {
            roll++;
        } else if (c == 'X') {
            score += 10;
            roll = 0;
        }
    }
    if (roll < 2) {
        if (roll == 1)
            score += roll * 10;
        else
            score += 10 + (roll - 2) * 10 / 3;
    }
    return score;
}

int main(int argc, char* argv[]){
    if(argc != 2){
        cout << "Usage: ./program_name <input_string>" << endl;
        exit(1);
    }
    cout << bowlingScore(argv[1]) << endl;
    return 0;
}