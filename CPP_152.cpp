```cpp
bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> compareVect(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            int temp = abs(game[i] - guess[i]);
            if(temp > 9)temp=9;
            result.push_back(temp);
        }
    }
    return result;
}

int main() {
    assert(isSame(compareVect({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
}