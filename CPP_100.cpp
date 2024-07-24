#include <vector>
#include <iostream>
using namespace std;

std::vector<int> make_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; i++) {
        pile.push_back(i * 2);
    }
    return pile;
}

bool isSame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector<int> pile = make_pile(n);
    // Test the function
    assert(isSame(pile, make_pile(n)));
    return 0;
}