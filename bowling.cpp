#include <string>

int bowlingScore(string input) {
    int total = 0;
    for (int i = 0; i < 20; i++) {
        string roll = input.substr(i, 1);
        if (roll == "X") {
            total += 10 + getBonus(input, i);
        } else if (roll[0] == ' ') {
            int strikeValue = getStrikeValue(input, i);
            total += strikeValue;
        } else {
            int value = roll[0] - '0';
            total += value;
            roll = input.substr(i + 1, 2);
            while (roll != "///") {
                value += roll[0] - '0';
                if (roll[1] == '/') {
                    break;
                }
                roll = input.substr(i + 3, 2);
            }
            total += value;
        }
    }
    return total;
}

int getStrikeValue(string input, int i) {
    int strikeValue = 10;
    for (int j = i; j < i + 2; j++) {
        string roll = input.substr(j, 1);
        if (roll == "X") {
            strikeValue += 10 + getBonus(input, j);
        } else {
            strikeValue += roll[0] - '0';
        }
    }
    return strikeValue;
}

int getBonus(string input, int i) {
    string roll = input.substr(i + 1, 2);
    if (roll == "X") {
        return 10 + getBonus(input, i + 2);
    } else {
        return roll[0] - '0';
    }
}