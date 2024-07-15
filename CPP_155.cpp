#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

int main() {
    int num;
    cin >> num;
    vector<int> even_odd_count = count_even_odd_digits(num);
    vector<int> expected_counts = {even_odd_count[1], even_odd_count[0]};
    if (issame(even_odd_count, expected_counts)) {
        cout << "Counts are correct." << endl;
    } else {
        cout << "Counts are incorrect." << endl;
    }
    return 0;
}