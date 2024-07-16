#include <vector>
#include <cassert>
using namespace std;

bool vectorEqual(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    while (stones > 0) {
        pile.push_back(stones);
        stones -= 1;
    }
    return pile;
}

int test_make_a_pile() {
    assert(vectorEqual(make_a_pile(8), vector<int>({8, 7, 6, 5, 4, 3, 2, 1})) == true);
    return 0;
}