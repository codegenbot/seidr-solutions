#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            int diff = abs(game[i] - guess[i]);
            result.push_back(diff);
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> game(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> game[i];
    }

    vector<int> guess(n);
    cout << "Enter your guess: ";
    for (int i = 0; i < n; i++) {
        cin >> guess[i];
    }

    if (issame(game, guess)) {
        cout << "Congratulations! You guessed correctly." << endl;
    } else {
        vector<int> result = compare(game, guess);
        cout << "Incorrect. The correct numbers are: ";
        for (int i = 0; i < n; i++) {
            if (result[i] == 0) {
                cout << game[i] << " ";
            } else {
                cout << abs(game[i] - guess[i]) << " ";
            }
        }
        cout << endl;
    }

    return 0;
}