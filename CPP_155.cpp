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

bool is_same(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(is_same(even_odd_count(0), {1, 0}));
    return 0;
}