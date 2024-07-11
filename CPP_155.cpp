#include <vector>
#include <string>
#include <cassert>

std::vector<int> even_odd_count(int num);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> evenOdd1 = even_odd_count(123456);
    std::vector<int> evenOdd2 = even_odd_count(-987654);

    assert(issame(evenOdd1, {3, 3}));
    assert(issame(evenOdd2, {3, 3}));

    return 0;
}