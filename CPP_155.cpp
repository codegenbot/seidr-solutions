#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

using namespace std;

vector<int> even_odd_count(int num) {
    vector<int> count(2, 0);
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            count[0]++;
        } else {
            count[1]++;
        }
    }
    return count;
}

int main() {
    vector<int> expected = {1, 0};
    vector<int> result = even_odd_count(0);
    assert(result == expected);
    return 0;
}