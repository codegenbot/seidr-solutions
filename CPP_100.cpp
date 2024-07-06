#include <stdio.h>
#include <vector>
using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = 1;
    
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0) // even level
            pile.push_back(stones * 2);
        else // odd level
            pile.push_back(stones * 2 - 1);
        
        stones += (stones % 2 != 0 ? 2 : 1); // next level's stone number
    }
    
    return pile;
}