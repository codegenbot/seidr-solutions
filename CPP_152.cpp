#include <vector>
#include <iostream>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess);

int main() {
    int n;
    std::cin >> n;
    std::vector<int> g, g1;
    
    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        g.push_back(x);
    }
    
    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        g1.push_back(x);
    }

    std::vector<int> result = compare(g, g1);

    for (int i = 0; i < result.size(); ++i) {
        if (result[i] == 0)
            std::cout << "M" << '\n';
        else if (result[i] == 1)
            std::cout << "A" << '\n';
        else
            std::cout << "B" << '\n';
    }

    return 0;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            if (guess[i] == game[i] - 1 || guess[i] == game[i] + 1)
                result.push_back(1);
            else
                result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}