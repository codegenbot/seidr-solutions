#include <vector>
#include <string>
#include <cmath>

bool issame(vector<int> a, vector<int> b);

vector<int> even_odd_count(int num);

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
    // Main function implementation goes here
    return 0;
}