#include <stdio.h>
#include <vector>
using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int level = 1;
    for (int i = 0; i < n; i++) {
        if (level % 2 == 0) {
            pile.push_back(level * 2);
        } else {
            pile.push_back(2 * level - 1);
        }
        level++;
    }
    return pile;
}