```c++
#include <unordered_map>
#include <algorithm>

using namespace std;

int mastermind(string code, string guess) { 
    int whitePegs = 0;
    int blackPegs = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }
    
    unordered_map<char, int> codeCount;
    for (char c : code) {
        codeCount[c]++;
    }

    for (char c : code) {
        if (codeCount[c] > 0) {
            codeCount[c]--;
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (guess[i] != code[i]) {
            int count = std::count(code.begin(), code.end(), guess[i]);
            if (count > 0) {
                whitePegs++;
            }
        }
    }

    return blackPegs;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code (4 characters): ";
    cin >> code;
    cout << "Enter your guess (4 characters): ";
    cin >> guess;
    int result = mastermind(code, guess);
    cout << "Number of white pegs: 0\nNumber of black pegs: " << result << endl;
    return 0;

}