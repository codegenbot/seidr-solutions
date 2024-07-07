#include <unordered_map>

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
        int count = codeCount[c];
        if (count > 1) {
            whitePegs += count - 1;
        } else if (count == 1) {
            blackPegs++;
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        codeCount[guess[i]]--;
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