#include <vector>
#include <algorithm>
#include <cassert>

namespace std {
    using ::std::vector;

    bool issame(const vector<int>& a, const vector<int>& b) {
        return a == b;
    }
}

std::vector<int> sort_array(std::vector<int> array){
    if(array.empty()) return array;
    if((array.front() + array.back()) % 2 == 0)
        std::sort(array.begin(), array.end(), std::greater<int>());
    else
        std::sort(array.begin(), array.end());
    return array;
}

#define ASSERT_VECTOR_EQ(a, b) assert(std::equal(a.begin(), a.end(), b.begin(), b.end()))

int main()