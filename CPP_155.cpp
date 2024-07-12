#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<int> even_odd_count(int num) {
    vector<int> counts(2, 0);
    string num_str = to_string(abs(num));
    for (char digit : num_str) {
        if ((digit - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

int main() {
    vector<int> expected = {1, 0};
    vector<int> result = even_odd_count(0);
    assert(expected == result);
    return 0;
}