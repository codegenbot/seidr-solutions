#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

bool below_threshold(vector<int> l, int t) {
    for(int num : l) {
        if(num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(!below_threshold({1, 8, 4, 10}, 10));
    assert(below_threshold({1, 8, 4, 5}, 10));
    cout << "All tests passed!" << endl;
    return 0;
}