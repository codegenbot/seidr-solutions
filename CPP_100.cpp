#include <vector>

bool issame(vector<int> a, vector<int> b);

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    while (stones > 0) {
        pile.push_back(stones);
        if (n % 2 == 1) {
            n++;
            stones = n;
        } else {
            n++;
            stones = n * 2;
        }
    }
    return pile;
}

int main() {
    vector<int> a = make_a_pile(8);
    cout << "a: ";
    for (auto i : a) cout << i << " ";
    cout << endl;
    
    assert (issame(a, {8, 10, 12, 14, 16, 18, 20, 22})); 
    return 0;
}