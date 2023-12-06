
#include <iostream>
#include <algorithm>
using namespace std;
int next_smallest(vector<int>& lst) {
    return *min_element(lst.begin() + 1, lst.end());
}
int main() {
    vector<int> lst = {-35, 34, 12, -45};
    assert (next_smallest(lst) == -35);
    return 0;
}