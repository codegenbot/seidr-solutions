#include <vector>
#include <cassert>

using namespace std;

int main() {
    assert(issame(vector<int>{1}, vector<int>{1}));
    assert(issame(vector<int>{1, 3}, vector<int>{1, 3}));
    return 0;
}