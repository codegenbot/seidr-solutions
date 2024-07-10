#include <vector>
using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 0; i < n; i++) {
        pile.push_back(i + 1 + 2*(i));
    }
    return pile;
}

bool sameVectors(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(sameVectors(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    // Rest of your code
}