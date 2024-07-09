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
    std::vector<int>(n);  // or std::vector<int>() for dynamic sizing
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> game(n);
    std::vector<int> guess = game; 
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        int temp;
        std::cin >> temp;
        game[i] = temp;
        guess[i] = temp; 
    }
    if(issame(game, guess)){
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