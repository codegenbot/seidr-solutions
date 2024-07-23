```cpp
bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (issame({game[i], guess[i]}, {1, 2})) {
            result.push_back(0);
        } else if (game[i] > guess[i]) {
            result.push_back(-1);
        } else {
            result.push_back(1);
        }
    }
    return result;
}