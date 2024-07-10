```cpp
#include <vector>
#include <algorithm>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else {
            bool isSameNumberInGameAndGuess = false;
            for(int j = 0; j< game.size(); j++){
                if(game[j] == guess[i]){
                    isSameNumberInGameAndGuess = true;
                    break;
                }
            }
            result.push_back(isSameNumberInGameAndGuess ? 1 : 0);
        }
    }
    return result;
}

int main() {
    assert (compare({1,2,3,5},{-1,2,3,4}) == {2,0,0,1});
    return 0;
}