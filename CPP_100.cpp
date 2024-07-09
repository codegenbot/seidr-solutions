#include <vector>
#include <initializer_list>
#include <utility>

using namespace std;

bool operator==(const vector<int>& a, initializer_list<int> b) {
    if (a.size() != distance(b.begin(), distance(b.end(), back_inserter(vector<int>(b))))) 
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != *next(cbegin(b), i))
            return false;
    return true;
}

vector<int> make_a_pile(int n) {
    vector<int> pile = {0, 1};
    for (int i = 2; i <= n; ++i)
        pile.insert(pile.begin(), i);
    return pile;
}

int main() {
    assert(make_a_pile(8) == vector<int>({8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}