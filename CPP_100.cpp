#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; i++) {
        if ((n % 2) == 1) { 
            pile.push_back(stones);
            stones += 2;
        } else { 
            pile.push_back(stones);
            stones += 1;
        }
    }
    return pile;
}

int main() {
    int n = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> pile = make_a_pile(n);

    if (issame(pile, {1, 3, 5})) {
        cout << "The piles are same." << endl;
    } else {
        cout << "The piles are not the same." << endl;
    }

    return 0;
}