#include <string>
#include <vector>

int bowlingScore(const std::string& input) {
    int score = 0;
    std::vector<std::pair<int, bool>> rolls;

    for (const auto& frame : input | std::views::split('|')) {
        if (frame[0] == 'X') {
            rolls.push_back({10, true});
        } else if (frame.find('/') != std::string::npos) {
            int firstRoll = std::stoi(frame.substr(0, frame.find('/')));
            int secondRoll = std::stoi(frame.substr(frame.find('/') + 1));
            rolls.push_back({firstRoll + secondRoll, false});
        } else {
            int roll = std::stoi(frame);
            if (roll == 10) {
                rolls.push_back({10, true});
            } else {
                rolls.push_back({roll, false});
                if (!rolls.back().second) {
                    rolls.push_back({10 - rolls.back().first, true});
                }
            }
        }
    }

    for (const auto& roll : rolls) {
        score += roll.first;
        if (!roll.second) {
            score += 10;
        }
    }

    return score;
}

int main() {
    int score = bowlingScore("X|9-|-||5/7|-|8/X|4-6|2/8|3-1|6/4|10-|0-0");
    return 0;
}