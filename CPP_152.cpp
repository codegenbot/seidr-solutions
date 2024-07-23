#include <vector>
#include <cmath>

bool issame(std::vector<int> a, std::vector<int> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(std::abs(game[i] - guess[i]));
        }
    }
    return result;
}

int main() {
    std::vector<int> game = {1,2,3,5};
    std::vector<int> guess = {-1,2,3,4};
    if (issame(game,guess)) {
        for(int i=0; i<game.size();i++) {
            if(guess[i]==game[i]) {
                printf("Color %d is correct.\n",i+1);
            } else {
                printf("The color of the card you chose is different. You picked a card of %d and the actual color is %d.\n",(guess[i]+1),abs(game[i]-guess[i]));
            }
        }
    } else {
        for(int i=0; i<game.size();i++) {
            if(guess[i]==game[i]) {
                printf("Color %d is correct.\n",i+1);
            } else {
                printf("The color of the card you chose is different. You picked a card of %d and the actual color is %d.\n",(guess[i]+1),abs(game[i]-guess[i]));
            }
        }
    }
    return 0;
}