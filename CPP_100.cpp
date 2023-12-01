#include <vector>

vector<int> make_a_pile(int n) {
    vector<int> pile;
    pile.push_back(n);
    for (int i = 1; i < n; i++) {
        if (n % 2 == 0) {
            pile.push_back(n + 2 * i);
        } else {
            pile.push_back(n + 2 * i - 1);
        }
    }
    return pile;
}

bool issame(vector<int> a, vector<int> b) {
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

int main() {
    vector<int> pile1 = make_a_pile(5);
    vector<int> pile2 = {5, 7, 9, 11, 13};
    if (issame(pile1, pile2)) {
        cout << "The piles are the same." << endl;
    } else {
        cout << "The piles are different." << endl;
    }
    return 0;
}