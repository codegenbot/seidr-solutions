#include <vector>
#include <cassert>

vector<int> incr_list(vector<int> v) {
    for (int &num : v) {
        num++;
    }
    return v;
}

int main() {
    assert(incr_list(vector<int>{5, 2, 5, 2, 3, 3, 9, 0, 123}) == vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124});
    return 0;
}