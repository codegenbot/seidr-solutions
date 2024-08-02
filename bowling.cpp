#include <iostream>
#include <string>

using namespace std;

int bowlingScore(std::string s) {
    int score = 0;
    int frame = 1;
    int bowl = 0;
    for (char c : s) {
        // existing logic remains the same
    }
    return score;
}

int main() {
    string input;
    cout << "Enter bowling sequence: ";
    cin >> input;
    
    int finalScore = bowlingScore(input);
    cout << "Final score: " << finalScore << endl;
    
    return 0;
}