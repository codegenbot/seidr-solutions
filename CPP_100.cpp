```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 1; i <= n; ++i) {
        pile.push_back(i);
    }
    return pile;
}

int main() {
    int n;
    cin >> n;
    vector<int> a = make_a_pile(n);
    sort(a.begin(), a.end());
    cout << "Enter the number of cards in your hand: ";
    int m;
    cin >> m;
    vector<int> b = make_a_pile(m);  // Initialize with m cards
    std::sort(b.begin(), b.end());    // Sort before pushing into vector
    b = make_a_pile(m);                // Push elements from sorted array into vector
    sort(b.begin(), b.end());
    
    if (isSame(a, b)) {
        cout << "You have the same pile as me." << endl;
    } else {
        cout << "You don't have the same pile as me." << endl;
    }
    
    return 0;
}