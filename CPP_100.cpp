#include <vector>
#include <cassert>

using namespace std;

vector<int> make_a_pile(int start, int n) {
    vector<int> pile;
    int current = start;
    for(int i = 0; i < n; ++i) {
        pile.push_back(current);
        current += 2;
    }
    return pile;
}

int main() {
    assert(make_a_pile(8, 8) == vector<int>{8, 10, 12, 14, 16, 18, 20, 22});
    return 0;
}