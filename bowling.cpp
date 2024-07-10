#include <iostream>
#include <vector>
using namespace std;

int bowlingScore(string input) {
    int score = 0;
    vector<int> scores;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'X') {
            scores.push_back(10);
        } else if (input[i] == '-') {
            continue;
        } else if (isdigit(input[i])) {
            string temp = "";
            while (i < input.length() && isdigit(input[i])) {
                temp += input[i++];
            }
            int value = stoi(temp);
            scores.push_back(value);
        } else if (input[i] == '|') {
            i++;
            continue;
        }

    }

    for (int i = 0; i < scores.size(); i++) {
        if (i + 1 < scores.size() && scores[i] + scores[i + 1] > 10) {
            score += 10 - scores[i];
            i++;
        } else {
            score += scores[i];
        }
    }

    return score;
}

int main() {
    std::cout << bowlingScore("X|---5-8-|X||25--|-1-3-4-6-8-9-7");
}