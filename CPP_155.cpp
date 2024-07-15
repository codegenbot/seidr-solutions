#include <vector>
#include <string>
#include <cmath>

bool issame(vector<int> a, vector<int> b) {
    return (a[0] == b[0] && a[1] == b[1]);
}

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
    // Test your even_odd_count function here
    return 0;
}