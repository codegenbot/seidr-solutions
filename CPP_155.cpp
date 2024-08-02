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
    assert(even_odd_count(12345) == vector<int>{3, 2});
    assert(even_odd_count(246810) == vector<int>{3, 3});
    assert(even_odd_count(-987) == vector<int>{1, 2});
    assert(even_odd_count(1111111) == vector<int>{7, 0});

    return 0;
}