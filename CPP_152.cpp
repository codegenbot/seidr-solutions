#include <iostream>
#include <vector>
#include <cmath>

int compare(std::vector<int> game, std::vector<int> guess) {
    int result = 0;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result += 0;
        } else {
            result += abs(guess[i] - game[i]);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame({1,2,3,5},{-1,2,3,4})==2);
    std::cout << "Test passed" << std::endl;
    return 0;
}