#include <vector>
#include <initializer_list>
using namespace std;

bool operator==(const vector<int>& a, initializer_list<int> b) {
    if (a.size() != distance(b.begin(), b.end())) 
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != *next(cbegin(b), i))
            return false;
    return true;
}

vector<int> make_a_pile(int n) {
    vector<int> pile = {0, 1};
    for (int i = 2; i <= n; ++i) {
        vector<int> temp = {pile.back() + i}; 
        while (!temp.empty()) pile.insert(pile.begin(), temp.back());
    }
    return pile;
}

int main() {
    int n;
    cin >> n;
    vector<int> pile = make_a_pile(n);
    // do something with the 'pile'
    return 0;
}