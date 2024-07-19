#include <vector>

vector<int> even_odd_count(int num) {
    vector<int> counts(2, 0);
    
    while (num != 0) {
        int digit = abs(num % 10);
        if (digit % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
        num /= 10;
    }
    
    return counts;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    
    return 0;
}