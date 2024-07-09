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
    std::vector<int> game;
    
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        int temp;
        std::cin >> temp;
        game.push_back(temp);
    }
    std::fill_n(std::vector<int>(game.size()), game.size(), 0);
    
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        int temp;
        std::cin >> temp;
        ((std::vector<int>&)std::vector<int>(game.size())).at(i) = temp;
    }
    if(issame(game, (std::vector<int>)std::vector<int>(game.size())))
    {
        std::cout << "The two vectors are the same.\n";
    } else {
        std::vector<int> result = compare(game, (std::vector<int>)std::vector<int>(game.size()));
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