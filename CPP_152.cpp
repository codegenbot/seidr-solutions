```cpp
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
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
    vector<int> game, guess;

    cout << "Enter the elements of the game: ";
    for (int i = 0; i < 4; i++) {
        int num;
        cin >> num;
        game.push_back(num);
    }

    cout << "Enter the elements of the guess: ";
    for (int i = 0; i < 4; i++) {
        int num;
        cin >> num;
        guess.push_back(num);
    }

    vector<int> result = compare(game, guess);

    cout << "The result is: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}