#include <vector>
#include <cassert>

using namespace std;

bool issame(const initializer_list<int>& a, const initializer_list<int>& b) {
    vector<int> vecA(a), vecB(b);
    return vecA == vecB;
}

vector<int> make_a_pile(int n) {
    int stones = n;
    vector<int> pile;
    for (int i = 0; i < n; i++) {
        if (stones % 2 == 1) {
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
    vector<int> make_a_pile_result = {8, 10, 12, 14, 16, 18, 20, 22};
    assert(issame(vector<int>(make_a_pile(8)), make_a_pile_result));
    return 0;
}