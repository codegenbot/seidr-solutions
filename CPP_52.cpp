#include <cassert>
#include <vector>

bool below_threshold(std::vector<int> l, int t) {
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