#include <cassert>

int main2() {
    assert(histogram("a") == multimap<char, int>{{'a', 1}});
    return 0;
}