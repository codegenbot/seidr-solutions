#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    if (a == 0 && b == 0)
        return true;
    else if ((abs(a) + abs(b)) % 2 != 0)
        return false;
    else
        return true;
}

int main() {
    vector<int> game;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        game.push_back(x);
    }
    
    vector<int> guess;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        guess.push_back(x);
    }

    vector<int> result = compare(game, guess);

    for(int i : result)
    cout << i;

    return 0;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            if (issame(game[i], guess[i]))
                result.push_back(1);
            else
                result.push_back(2);
        }
    }
    return result;
}