#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

int compare(int a, int b) {
    if(a > b)
        return 1;
    else if(a < b)
        return -1;
    else
        return 0;
}

std::vector<int> getResult(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> res;
    for(int i = 0; i < game.size();i++){
        if(issame(game[i],guess[i]))
            res.push_back(1);
        else
            res.push_back(compare(game[i],guess[i]));
    }
    return res;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> game(n), guess(n);
    for(int i = 0; i < n;i++){
        std::cin >> game[i] >> guess[i];
    }
    std::vector<int> res = getResult(game,guess);
    if(res.size() != n) {
        std::cout << "Error: Invalid input. Please check your input again." << std::endl;
    } else {
        for(auto x:res)std::cout << x << " ";
        std::cout << std::endl; 
    }
    return 0;
}