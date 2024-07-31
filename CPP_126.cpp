#include <algorithm>
#include <vector>
#include <cassert>

using namespace std;

bool is_sorted_and_unique(const vector<int>& lst) {
    return unique(lst.begin(), lst.end()) == lst.end() && is_sorted(lst.begin(), lst.end());
}

int main() {
    assert(is_sorted_and_unique({1, 2, 3, 4}) == true);
    
    return 0;
}