#include <vector>

bool issame(vector<int> a, vector<int> b);

bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> even_odd_count(int num) {
    vector<int> counts = {0, 0};
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if (c % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

int main() {
    vector<int> test1 = even_odd_count(12345);
    vector<int> test2 = even_odd_count(-987654);
    assert(issame(test1, {3, 2}));
    assert(issame(test2, {3, 3}));

    return 0;
}