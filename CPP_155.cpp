#include <vector>
#include <string>
#include <cassert>

bool issame(vector<int> a, vector<int> b) { 
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> even_odd_count(int num);

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
    // Test the even_odd_count function
    vector<int> result = even_odd_count(123456);
    assert(result[0] == 3 && result[1] == 3);

    return 0;
}