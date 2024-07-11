#include <vector>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current = n;
    for (int i = 1; ; i++) {
        pile.push_back(current);
        if ((current % 2 == 0 && i % 2 != 0) || (current % 2 != 0 && i % 2 == 0)) break;
        current += (current % 2 == 0 ? 1 : 2);
    }
    return pile;
}