#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
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

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int count = 1;
    while (n > 0) {
        if (n % 2 == 1)
            pile.push_back(count);
        else
            pile.push_back(count + 1);
        count += 2;
        n--;
    }
    return pile;
}