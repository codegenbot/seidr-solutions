#include <string>
#include <cassert>

using namespace std;

template<typename T>
T compare(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

template<typename T>
T compare_one(T a, T b) {
    return compare(a, b);
}

int main() {
    assert(compare_one(string("1"), string("2")) == "2");
    assert(compare_one(2, 3) == 3);
    assert(compare_one(5, 3) == 5);
    assert(compare_one(string("abc"), string("def")) == "def");
    assert(compare_one(string("xyz"), string("abc")) == "xyz");

    return 0;
}