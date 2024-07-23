#include <vector>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    while (stones > 0) {
        pile.push_back(min(stones, 3)); 
        stones -= min(stones, 3); 
    }
    return pile;
}