#include <vector>
#include <algorithm>
using namespace std;

vector<int> get_odd_collatz(int n);
bool is_same(vector<int> a, vector<int> b);

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 1) {
            result.push_back(n);
        }
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    sort(result.begin(), result.end());
    return result;
}

bool is_same(vector<int> a, vector<int> b) {
    return a == b;
}