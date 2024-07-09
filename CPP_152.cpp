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
    std::vector<int> game, guess;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    // Handle the first element separately since we need both game and guess vectors to have same size.
    int temp1, temp2; 
    std::cout << "Enter element 1 (Game): ";
    std::cin >> temp1;
    game.push_back(temp1);
    guess.push_back(temp1); 

    // Read remaining elements
    for(int i = 1; i < n; i++){
        std::cout << "Enter element " << i+1 << " (Game): ";
        int temp1; 
        std::cin >> temp1;
        game.push_back(temp1);
        
        std::cout << "Enter element " << i+1 << " (Guess): ";
        int temp2; 
        std::cin >> temp2;
        guess.push_back(temp2); 
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