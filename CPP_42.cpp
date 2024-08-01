#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

std::vector<int> incr_list(std::vector<int> input) {
    for (int& num : input) {
        num++;
    }
    return input;
}

int main() {
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}