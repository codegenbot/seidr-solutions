#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> unique(std::vector<int>::iterator first, std::vector<int>::iterator last) {
    std::vector<int> result;
    for(; first != last; ++first) {
        if(std::find_if(result.rbegin(), result.rend(),
            [&first](int x){ return x == *first;}) == result.rend())
            result.push_back(*first);
    }
    return result;
}

int main() {
    assert(std::issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}.begin(), {5, 3, 5, 2, 3, 3, 9, 0, 123}.end()) , {0, 2, 3, 5, 9, 123});
    return 0;
}