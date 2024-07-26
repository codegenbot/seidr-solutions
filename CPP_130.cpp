#include <vector>
#include <cassert>

using namespace std;

vector<int> tri(int a) {
    return {a, a+2, a+4};
}

int main() {
    assert(issame(tri(1), vector<int>{1, 3, 5}));
    return 0;
}