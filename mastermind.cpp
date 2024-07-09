#include <iostream>
#include <string>
using namespace std;

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    vector<char> uniqueGuess;
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        } else {
            bool found = false;
            for(char c : uniqueGuess) {
                if(c == code[i]) {
                    found = true;
                    break;
                }
            }
            if(!found) {
                whitePegs++;
                uniqueGuess.push_back(guess[i]);
            }
        }
    }
    
    return blackPegs + whitePegs;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    getline(cin, code);
    cout << "Enter your guess: ";
    getline(cin, guess);
    int pegs = mastermind(code, guess);
    std::cout << "Number of pegs: " << pegs << std::endl;
    return 0;
}