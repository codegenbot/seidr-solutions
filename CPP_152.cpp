```cpp
#include <vector>
#include <algorithm>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            int diff = abs(guess[i] - game[i]);
            bool isSame = (diff == 1) ? false : true;
            // Use this function here
            if (!isSame) {
                int count = 0;
                for(int j=0;j<guess.size();j++){
                    if(game[j] == guess[j])
                        count++;
                }
                result.push_back(count);
            } else {
                result.push_back(diff);
            }
        }
    }
    return result;
}