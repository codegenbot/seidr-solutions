#include <cassert>

int skjkasdkd(vector<int> lst) {
    int max = *max_element(lst.begin(), lst.end());
    return to_string(max).length();
}

int main() {
    vector<int> lst = {127, 97, 8192};
    assert(skjkasdkd(lst) == 10);
    return 0;
}