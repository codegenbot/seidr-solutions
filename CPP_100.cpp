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
    int n;
    cout << "Enter the number of stones: ";
    cin >> n;
    vector<int> p = make_a_pile(n);
    cout << "Pile: ";
    for (int i : p) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}