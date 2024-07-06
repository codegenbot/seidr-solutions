#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<int> game;
    vector<int> guess;

    // input values
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;

    game.push_back(n1);
    game.push_back(n2);
    game.push_back(n3);
    game.push_back(n4);
    game.push_back(n5);
    game.push_back(n6);
    game.push_back(n7);
    game.push_back(n8);
    game.push_back(n9);
    game.push_back(n10);

    int m1, m2, m3, m4, m5, m6, m7, m8, m9, m10;
    cin >> m1 >> m2 >> m3 >> m4 >> m5 >> m6 >> m7 >> m8 >> m9 >> m10;

    guess.push_back(m1);
    guess.push_back(m2);
    guess.push_back(m3);
    guess.push_back(m4);
    guess.push_back(m5);
    guess.push_back(m6);
    guess.push_back(m7);
    guess.push_back(m8);
    guess.push_back(m9);
    guess.push_back(m10);

    vector<int> result = compare(game, guess);
    
    for (int i = 0; i < game.size(); i++) {
        cout << "Result: " << result[i] << endl;
    }
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(guess[i] - game[i]));
        }
    }
    return result;
}