#include <iostream>
#include <vector>
using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = 1;
    
    for (int i = 0; i < n; i++) {
        if ((stones % 2) == 0)
            pile.push_back(stones + 1);
        else
            pile.push_back(stones + 2);
        stones += 3;
    }
    
    return pile;
}