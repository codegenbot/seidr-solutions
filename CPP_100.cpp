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
    vector<int> pile;
    int stones = n;
    while (INT_MAX / 2 >= n) {
        pile.push_back(n);
        if (n % 2 == 1) {
            n++;
        } else {
            n += 2;
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