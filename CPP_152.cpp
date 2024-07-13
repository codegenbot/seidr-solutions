#include <iostream>
#include <vector>

bool compare(int a, int b) {
    return a == b;
}

std::vector<int> getResult(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> game(n), guess(n);
    for(int i = 0; i < n;i++){
        std::cin >> game[i] >> guess[i];
    }
    
    if(compare(game[0],guess[0]) != 0) {
        std::cout << "Error: Invalid input. Please check your input again." << std::endl;
    } else {
        std::vector<int> res = getResult(game,guess);
        for(auto x:res)std::cout << x << " ";
        std::cout << endl; 
    }
    
    return 0;
}