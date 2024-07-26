#include <vector>
#include <cassert>

using namespace std;

bool compare(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> tri(int a) {
    return {a, a+1, a+2};
}

int main() {
    assert(compare(tri(1), vector<int>{1, 3}));
    return 0;
}