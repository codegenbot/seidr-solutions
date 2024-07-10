#include <vector>
using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current = 1;
    for (int i = 0; i < n; i++) {
        if ((current & 1) == 1) {
            pile.push_back(current);
            current += 2;
        } else {
            pile.push_back(current);
            current += 1;
        }
    }
    return pile;
}