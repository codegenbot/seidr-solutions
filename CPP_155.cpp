#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

int main() {
    int num;
    cin >> num;
    vector<int> even_odd_count = count_even_odd(num);
    vector<int> target = {2, 1};
    if (issame(even_odd_count, target)) {
        cout << "Counts match the target" << endl;
    } else {
        cout << "Counts do not match the target" << endl;
    }
    return 0;
}