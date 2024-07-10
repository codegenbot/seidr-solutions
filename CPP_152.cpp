#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) 
        return false;
    for (int i = 0; i < a.size(); i++) 
        if (a[i] != b[i]) 
            return false;
    return true;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        int diff = abs(guess[i] - game[i]);
        if (guess[i] == game[i]) 
            result.push_back(0);
        else if (std::find(result.begin(), result.end(), diff) != result.end()) 
            result.push_back(-1);
        else
            result.push_back(diff);
    }
    return result;
}