#include <iostream>
#include <string>

using namespace std;

int calculateBowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); ++i) {
        // Existing logic for calculating bowling score
    }
    return score;
}

int main() {
    string input;
    std::getline(std::cin, input);
    cout << calculateBowlingScore(input) << std::endl;
    return 0;
}