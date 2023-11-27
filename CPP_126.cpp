#include <vector>
#include <cassert>
#include <algorithm>

bool is_sorted(const std::vector<int>& lst){
    return std::is_sorted(lst.begin(), lst.end());
}

int main(){
    assert(is_sorted({1, 2, 3, 4}) == true);
    assert(is_sorted({4, 3, 2, 1}) == false);
    assert(is_sorted({1, 3, 2, 4}) == false);

    return 0;
}