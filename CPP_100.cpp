```cpp
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> make_a_pile(int n) {
    vector<int> pile = {0}; // Initialize the vector
    for (int i = 1; i <= n; ++i) {
        if ((n - i) % 2 == 0) {
            pile.push_back(i);
            pile.push_back(i + 1);
        } else {
            pile.push_back(i * 2);
        }
    }
    return pile;
}

int main() {
    int n;
    cout << "Enter the number of stones: ";
    cin >> n;
    vector<int> pile = make_a_pile(n);
    for (int i : pile) {
        cout << i << " ";
    }
    if(isSame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22})) {
        cout << "\nThe piles are the same.\n";
    } else {
        cout << "\nThe piles are not the same.\n";
    }
    return 0;
}