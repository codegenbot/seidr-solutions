#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> even_odd_count(int num) {
    vector<int> counts(2, 0);
    string num_str = to_string(abs(num));
    for (char c : num_str) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

int main() {
    assert(issame(vector<int>{4, 5}, even_odd_count(123456789)));
    assert(issame(vector<int>{5, 0}, even_odd_count(24680)));
    assert(issame(vector<int>{0, 6}, even_odd_count(111111)));

    return 0;
}