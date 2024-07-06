```
#include <iostream>
#include <vector>
using namespace std;

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}

int main() {
    std::vector<int> g1 = {2, 7, 11};
    std::vector<int> g2 = {3, 8, 12};

    std::vector<int> res = compare(g1, g2);

    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}