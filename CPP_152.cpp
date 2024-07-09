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

void startProgram() {
    int n;
    std::cout << "Enter the number of elements: ";
    if (!(std::cin >> n)) { 
        std::cerr << "Error: Please enter a non-negative integer." << std::endl;
        return; 
    }
    if(n < 0) {
        std::cerr << "Error: Number of elements should be non-negative." << std::endl;
        return; 
    }

    // Create a new vector and fill space
    std::vector<int> game; 
    for(int i = 0; i < n; i++){
        int temp;
        while(true) {
            std::cout << "Enter element " << i+1 << ": ";
            if (!(std::cin >> temp)) { 
                std::cerr << "Error: Please enter a non-negative integer." << std::endl;
                std::cin.clear(); // Clear the error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the rest of the line
                return; 
            }
            if(temp < 0) {
                std::cerr << "Error: Number of elements should be non-negative." << std::endl;
                return; 
            }
            game.push_back(temp);
            break;
        }
   
    
    // Create a new vector and fill space
    std::vector<int> guess; 
    for(int i = 0; i < n; i++){
        int temp;
        while(true) {
            std::cout << "Enter element " << i+1 << ": ";
            if (!(std::cin >> temp)) { 
                std::cerr << "Error: Please enter a non-negative integer." << std::endl;
                std::cin.clear(); // Clear the error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the rest of the line
                return; 
            }
            if(temp < 0) {
                std::cerr << "Error: Number of elements should be non-negative." << std::endl;
                return; 
            }
            guess.push_back(temp);
            break;
        }
    }
    
    if(issame(game, guess)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::vector<int> result = compare(game, guess);
        for(int i = 0; i < result.size(); i++) {
            std::cout << "Element " << i+1 << ": " << result[i] << std::endl;
        }
    }
}

int main() {
    startProgram();
    return 0;
}