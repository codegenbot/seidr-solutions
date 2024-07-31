#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> stones;
    stones.push_back(n);
    while (n % 2 == 0) {
        n += 2;
        stones.push_back(n);
    }
    return stones;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    
    cout << "Test passed!" << endl;
    
    return 0;
}