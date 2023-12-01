#include <vector>

vector<int> make_a_pile(int n) {
    vector<int> pile;
    pile.push_back(n);
    
    for (int i = 1; i < n; i++) {
        if (n % 2 == 0) {
            pile.push_back(n + 2 * i);
        }
        else {
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
    int n;
    cin >> n;
    
    vector<int> pile = make_a_pile(n);
    vector<int> test = make_a_pile(n);
    
    cout << issame(pile, test);
    
    return 0;
}