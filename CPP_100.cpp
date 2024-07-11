#include <vector>
using namespace std;

vector<int> make_a_pile(int n);

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    vector<int> a = make_a_pile(5);
    vector<int> b = make_a_pile(5);

    if (issame(a, b)) {
        cout << "The piles are the same." << endl;
    } else {
        cout << "The piles are different." << endl;
    }

    return 0;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 0; i < n; ++i) {
        pile.push_back(i);
    }
    return pile;
}