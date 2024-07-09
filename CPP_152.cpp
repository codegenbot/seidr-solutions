```cpp
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
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
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    // Create a new vector and fill space
    std::vector<int> game;
    int val;
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> val;
        game.push_back(val);
    }
    
    // Create a new vector and fill space
    std::vector<int> guess;
    val = 0;
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> val;
        guess.push_back(val);
    }
    
    if(issame(game, guess))
    {
        std::cout << "The two vectors are the same.\n";
    } else {
        std::vector<int> result = compare(game, guess);
        for(int i = 0; i < game.size(); i++){
            std::cout << "Element " << i+1 << ": ";
            if(result[i] == 0)
                std::cout << "Matched\n";
            else
                std::cout << "Missed by " << result[i] << "\n";
        }
    }
    return 0;
}