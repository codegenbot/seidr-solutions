#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

int main() {
    int num;
    cin >> num;
    vector<int> even_odd_count = count_even_odd_digits(num);
    vector<int> counts = count_even_odd_digits(num);
    if (issame(even_odd_count, counts)) {
        cout << "Counts are the same" << endl;
    } else {
        cout << "Counts are different" << endl;
    }
    return 0;
}