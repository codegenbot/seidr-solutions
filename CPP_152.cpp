````
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            int diff = abs(game[i] - guess[i]);
            // The number of black pegs is the difference between the two numbers
            int blackPegs = 0;
            for(int j = 1; j <= diff; j++) {
                if(diff % j == 0) {
                    blackPegs++;
                }
            }
            result.push_back(blackPegs);
        }
    }
    return result;
}