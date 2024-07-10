#include <vector>
#include <cassert>

using namespace Contest;

namespace Contest {
    int solutions(const std::vector<int>& lst) {
        int sum = 0;
        size_t i;
        for (i = 0; i < lst.size(); ++i) {
            if (i % 2 == 0 && lst[i] % 2 != 0) {
                sum += lst[i];
            }
        }
        return sum;
    }
}

int main() {
    assert(solutions({3, 13, 2, 9}) == 22);
    return 0;
}