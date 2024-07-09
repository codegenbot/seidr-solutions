#include <iostream>
#include <vector>

using namespace std;

bool isSame(vector<unsigned int> a, vector<unsigned int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<unsigned int> make_a_pile(int n) {
    vector<unsigned int> pile;
    unsigned int stones = 1;
    while (pile.size() < n) { 
        pile.push_back(stones);
        if ((n - stones) % 2 == 0) {
            stones += 1;
        } else {
            stones += 2;
        }
    }
    return pile;
}

int main() {
    int n;
    cout << "Enter the number of stones: ";
    cin >> n;
    vector<unsigned int> pile = make_a_pile(n);
    for (unsigned int i : pile) {
        cout << i << " ";
    }
    if(isSame(make_a_pile(8), vector<unsigned int>{unsigned int(8), unsigned int(10), unsigned int(12), unsigned int(14), unsigned int(16), unsigned int(18), unsigned int(20), unsigned int(22)})) {
        cout << "The piles are the same." << endl;
    } else {
        cout << "The piles are not the same." << endl;
    }
    return 0;
}