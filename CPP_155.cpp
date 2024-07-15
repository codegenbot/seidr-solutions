#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

int main() {
    int num;
    cin >> num;
    vector<int> counts = even_odd_count(num);
    if (issame(counts, {2, 2})) {
        cout << "Same counts of even and odd digits";
    } else {
        cout << "Different counts of even and odd digits";
    }
    return 0;
}