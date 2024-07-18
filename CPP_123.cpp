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

int main() {
    int input;
    cin >> input;
    vector<int> result = get_odd_collatz(input);
    vector<int> expected_output = {1, 3, 5, 9, 17, 25};

    if (issame(result, expected_output)) {
        cout << "The output is correct.";
    } else {
        cout << "The output is incorrect.";
    }
    
    return 0;
}