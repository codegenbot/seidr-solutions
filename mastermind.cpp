#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Count the number of correct colors in wrong places
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = '\0';
            guess[i] = '\0';
        }
    }
    
    // Count the number of correct colors in right places
    for (int i = 0; i < 4; i++) {
        int j = 0;
        while (j < 4) {
            if (code[j] == guess[i]) {
                white++;
                code[j] = '\0';
                break;
            }
            j++;
        }
    }
    
    return make_pair(white, black).second;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int result = mastermind(code, guess);
    cout << result.first << endl;
    cout << result.second << endl;
    return 0;
}