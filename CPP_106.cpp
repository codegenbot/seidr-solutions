#include <vector>
#include <cassert>

using namespace std;

vector<int> f(int n) {
    vector<int> result;
    for (int i = 1; i <= n; ++i) {
        result.push_back(i + 1);
    }
    return result;
}

int main() {
    assert(f(3) == vector<int>{2, 3, 4});
    return 0;
}