#include <cassert>
#include <vector>

int skjkasdkd(std::vector<int> lst) {
    int max = *max_element(lst.begin(), lst.end());
    return to_string(max).size();
}

int main() {
    std::vector<int> lst = {127, 97, 8192};
    assert(skjkasdkd(lst) == 3);
    return 0;
}