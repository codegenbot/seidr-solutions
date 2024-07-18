#include <vector>
#include <algorithm>

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        result.push_back(n);
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    vector<int> odd_nums;
    for (int num : result) {
        if (num % 2 != 0) {
            odd_nums.push_back(num);
        }
    }
    sort(odd_nums.begin(), odd_nums.end());
    return odd_nums;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> result = get_odd_collatz(10);
    vector<int> expected = {1, 3, 5, 9};

    if (issame(result, expected)) {
        cout << "Test passed!" << endl;
    } else {
        cout << "Test failed!" << endl;
    }

    return 0;
}