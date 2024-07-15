#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return (a[0] == b[0] && a[1] == b[1]);
}

int main() {
    int num;
    cin >> num;
    vector<int> counts = even_odd_count(num);
    vector<int> expectedCounts = {2, 2};
    if (issame(counts, expectedCounts)) {
        cout << "Counts are the same" << endl;
    } else {
        cout << "Counts are different" << endl;
    }
    return 0;
}