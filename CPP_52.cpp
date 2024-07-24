```c
#include <cassert>

bool below_threshold(vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;

}

if (below_threshold({1, 8, 4, 10}, 10) != false) {
    std::cerr << "Test failed." << std::endl;
    return 1;
}