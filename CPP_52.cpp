#include <iostream>
#include <vector>

using namespace std;

bool below_threshold(vector<int> l, int t) {
    for (int i = 0; i < l.size(); i++) {
        if (l[i] >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(!below_threshold({1, 8, 4, 10}, 10));
    return 0;
}