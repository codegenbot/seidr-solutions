#include <vector>
#include <cassert>

using namespace std;

vector<int> issame(vector<int> a, vector<int> b) {
    vector<int> result;
    int factorial = 1;
    int sum = 0;
    int n = a.size();
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            factorial *= i;
            result.push_back(factorial);
        } else {
            sum += i;
            result.push_back(sum);
        }
    }
    return result;
}

int main() {
    assert(issame({1, 2, 3}, {1, 2, 6}) == true);
    return 0;
}