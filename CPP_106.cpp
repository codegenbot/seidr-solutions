#include <vector>
#include <cassert>

using namespace std;

vector<int> f(int n) {
    vector<int> result;
    for (int i = 1; i <= n; ++i) {
        result.push_back(i * 3 / 2);
    }
    return result;
}