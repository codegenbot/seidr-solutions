#include <vector>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current = 1;
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0)
            current++;
        else
            current += 2;
        pile.push_back(current);
    }
    return pile;
}