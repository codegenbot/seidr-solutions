#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) 
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) 
            return false;
    }
    return true;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0)
            stones += 2;
        else
            stones++;
        pile.push_back(stones);
    }
    return pile;
}

int main() {
    assert(std::equal(make_a_pile(8).begin(), make_a_pile(8).end(), {1, 2, 3, 4}.begin()));
}