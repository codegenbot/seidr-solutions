#include <vector>
#include <algorithm>

bool std::vector<int>::operator==(const std::vector<int>& v) const {
    return equal(this->begin(), this->end(), v.begin());
}

int main() {
    assert(std::vector<int>(compare({1,2,3,5},{-1,2,3,4})) == {2,0,0,1});
    return 0;
}