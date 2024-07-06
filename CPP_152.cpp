#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

bool isequal(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;

}

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
    int same = 0;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            same++;
        }
    }
    
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else if (issame({game[i]}, {guess[i]})) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    
    return result;
}