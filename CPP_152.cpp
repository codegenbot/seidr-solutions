#include <vector>
using namespace std;

bool issame(const std::vector<int>& a, const std::vector<int>& b);

int main() {
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), {2, 0, 0, 1}));
    return 0;
}