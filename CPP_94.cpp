#include <cassert>
#include <vector>

int skjkasdkd(const std::vector<int>& lst);

int main() {
    std::vector<int> lst = {127, 97, 8192};
    assert(skjkasdkd(lst) == 10);
    return 0;
}