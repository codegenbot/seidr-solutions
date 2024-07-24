#include <vector>
#include <cassert>

std::vector<int> counts(std::vector<int> b, int num) {
    int count = 0;
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == num) {
            count++;
        }
    }
    
    return std::vector<int>{count};
}