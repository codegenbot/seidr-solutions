#include <iostream>

int main() {
    char bowls[10]; // 10-frame round of 10 pin bowling
    std::cout << "Enter a string representing the individual bowls in a 10-frame round of 10 pin bowling: ";
    std::cin >> bowls;
    int score = get_score(bowls);
    std::cout << "The score for this round is: " << score << std::endl;
    return 0;
}