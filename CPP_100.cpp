#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> stones;
    stones.push_back(n);
    for(int i = 1; i < n; ++i){
        n = n % 2 == 0 ? n + 1 : n + 2;
        stones.push_back(n);
    }
    return stones;
}

int main() {
    assert(make_a_pile(8) == vector<int>{8, 10, 12, 14, 16, 18, 20, 22});
    assert(make_a_pile(5) == vector<int>{5, 7, 9, 11, 13});
    assert(make_a_pile(3) == vector<int>{3, 5, 7});
    
    cout << "All tests passed!" << endl;
    
    return 0;
}