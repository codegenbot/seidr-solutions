#include <vector>

bool issame(const std::vector<int>& game, const std::vector<int>& guess){
    return game == guess;
}

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess){
    std::vector<int> result;
    for(int i=0; i<game.size(); i++){
        if(game[i] == guess[i]){
            result.push_back(0);
        }
        else{
            result.push_back(std::abs(game[i] - guess[i]));
        }
    }
    return result;
}