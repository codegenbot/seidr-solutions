#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    vector<int> odd_numbers;
    for (int num : result) {
        if (num % 2 != 0) {
            odd_numbers.push_back(num);
        }
    }
    sort(odd_numbers.begin(), odd_numbers.end());
    return odd_numbers;
}

int main() {
    // Test cases
    vector<int> test1 = get_odd_collatz(10);
    vector<int> test2 = get_odd_collatz(20);

    // Checking if the results are the same
    if (issame(test1, {1, 5}) && issame(test2, {1, 5, 13, 21})) {
        cout << "Tests passed!" << endl;
    } else {
        cout << "Tests failed!" << endl;
    }

    return 0;
}