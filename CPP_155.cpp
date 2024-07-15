#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return (a[0] == b[0] && a[1] == b[1]);
}

int main() {
    int num;
    cin >> num;
    vector<int> counts = even_odd_count(num);
    vector<int> testCounts = {2, 1};
    if (issame(counts, testCounts)) {
        cout << "Counts are correct." << endl;
    } else {
        cout << "Counts are incorrect." << endl;
    }
    return 0;
}