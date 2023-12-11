#include <iostream>
#include <vector>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    while (stones > 0) {
        if (n % 2 == 0) {
            stones--;
        } else {
            stones += 2;
        }
        pile.push_back(stones);
    }
    return pile;
}