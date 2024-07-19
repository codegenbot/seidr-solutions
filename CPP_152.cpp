#include <initializer_list>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> compareElements(std::vector<int> game, std::vector<int> guess) { 
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else if (std::count(game.begin(), game.end(), guess[i]) > 0) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    return result;
}

int mainFunction() {
    std::vector<int> game;
    int n;
    std::cout << "Enter the number of elements in the game: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int temp;
        std::cin >> temp;
        game.push_back(temp);
    }
    
    std::vector<int> guess;
    int m;
    std::cout << "Enter the number of elements in the guess: ";
    std::cin >> m;
    for (int i = 0; i < m; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int temp;
        std::cin >> temp;
        guess.push_back(temp);
    }
    
    std::vector<int> output = compareElements(game, guess);
    for (int i = 0; i < output.size(); i++) {
        std::cout << output[i] << " ";
    }
    return 0;
}

assert(issame({1,2,3,5},{-1,2,3,4}) && {2,0,0,1});