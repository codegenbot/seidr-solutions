#include <string>
#include <cassert>

using namespace std;

template <typename T>
T compare_one(T a, T b) {
    if (a > b) {
        return a;
    } else if (b > a) {
        return b;
    }
    return T();
}

int main() {
    assert(compare_one(string("1"), string("2")) == "2");
    assert(compare_one(2, 3) == 3);
    assert(compare_one(5, 3) == 5);
    assert(compare_one(string("abc"), string("def")) == "def");
    assert(compare_one(string("xyz"), string("abc")) == "xyz");

    return 0;
}