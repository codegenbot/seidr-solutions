#include <vector>
#include <string>
#include <iostream>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    return equal(a.begin(), a.end(), b.begin());
}

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
    if (issame(even_odd_count(0), {1, 0})) {
        cout << "Test Passed!";
    } else {
        cout << "Test Failed!";
    }

    return 0;
}