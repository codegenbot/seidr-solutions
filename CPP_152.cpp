#include <iostream>
#include <vector>

bool issame(int a, int b) {
    if (a == b)
        return true;
    return false;
}

void compare(vector<int> game, vector<int> guess) {
    for (int i = 0; i < game.size(); i++) {
        if (issame(game[i], guess[i]))
            cout << "Number at position " << i + 1 << " is same" << endl;
        else
            cout << "Number at position " << i + 1 << " is different, and the difference is " << abs(guess[i] - game[i]) << endl;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> game(n);
    for (int i = 0; i < n; i++)
        cin >> game[i];

    vector<int> guess(n);
    for (int i = 0; i < n; i++)
        cin >> guess[i];

    compare(game, guess);

    return 0;
}