#include <vector>
#include <cassert>
#include <cmath>
#include <string>

using namespace std;

vector<int> even_odd_count(int num) {
    vector<int> counts(2, 0);
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

int main() {
    assert(even_odd_count(0) == vector<int>{1, 0});
    assert(even_odd_count(123456789) == vector<int>{4, 5});
    assert(even_odd_count(-987654321) == vector<int>{5, 4});

    return 0;
}