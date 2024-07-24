#include <cassert>

using namespace std;

int main2() {
    assert(histogram("a") == make_map({{'a', 1}}));
    return 0;
}