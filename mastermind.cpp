#include <iostream>
#include <map>
#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    std::map<char, int> colorMap; 
    std::map<char, int> placementMap; 

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) { 
            black++;
        } else if (std::any_of(guess.begin(), guess.end(), [&](char c){return c==code[i];})) { 
            white++;
            colorMap[code[i]]++; 
        }
    }

    for (auto& pair : colorMap) {
        placementMap[pair.first] = pair.second; 
    }

    black -= std::count_if(placementMap.begin(), placementMap.end(), [](const auto &p){return p.second == 4;}); 

    return black;
}

int main() {
    std::string code, guess;
    std::cout << "Enter the Mastermind code: ";
    std::cin >> code;
    std::cout << "Enter your guess: ";
    std::cin >> guess;

    int result = mastermind(code, guess);
    std::cout << "Number of black pegs: " << result << std::endl;

    return 0;
}