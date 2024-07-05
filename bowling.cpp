#include <iostream>
#include <string>

int scoreBowling(const std::string& game) {
    int score = 0;
    int frame = 1;
    for (size_t i = 0; i < game.size(); ++i) {
        if (frame > 10) break;
        if (game[i] == 'X') { // Strike
            score += 10;
            if (i + 1 < game.size()) score += (game[i + 1] == 'X' ? 10 : (game[i + 1] == '/' ? 10 - (game[i] - '0') : (game[i + 1] == '-' ? 0 : game[i + 1] - '0')));
            if (i + 2 < game.size()) score += (game[i + 2] == 'X' ? 10 : (game[i + 2] == '/' ? 10 - (game[i + 1] - '0') : (game[i + 2] == '-' ? 0 : game[i + 2] - '0')));
            frame++;
        } else if (game[i] == '/') { // Spare
            score += 10 - (game[i - 1] == '-' ? 0 : game[i - 1] - '0');
            if (i + 1 < game.size()) score += (game[i + 1] == 'X' ? 10 : (game[i + 1] == '-' ? 0 : game[i + 1] - '0'));
            frame++;
        } else if (game[i] == '-') { // Miss
            frame += (i > 0 && game[i - 1] != 'X' && game[i - 1] != '/') ? 1 : 0;
        } else { // Number
            score += game[i] - '0';
            if (i + 1 < game.size() && game[i + 1] != '/' && game[i + 1] != 'X' && game[i + 1] != '-') frame++;
            else if (game[i + 1] == '/') i++;
        }
    }
    return score;
}

int main() {
    std::string input;
    while (std::getline(std::cin, input)) {
        std::cout << scoreBowling(input) << std::endl;
    }
    return 0;
}