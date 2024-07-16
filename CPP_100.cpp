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
        if (n % 2 == 1) {
            n++;
            stones = n;
        } else {
            n++;
            stones = n;
        }
    }
    return pile;
}

int main() {
    vector<int> expected = {8, 10, 12, 14, 16, 18, 20, 22};
    vector<int> actual = make_a_pile(8);
    assert(vectorEqual(actual, expected) == true);
    return 0;
}