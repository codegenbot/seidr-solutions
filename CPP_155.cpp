#include <vector>;

bool issame(vector<int> a, vector<int> b);

bool even_odd_count(int num) {
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

bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

int main() {
    vector<int> result = even_odd_count(123456);
    assert(result[0] == 3);
    assert(result[1] == 3);
    
    vector<int> expected = {2, 4};
    assert(issame(result, expected));
    
    return 0;
}