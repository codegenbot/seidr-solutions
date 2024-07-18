#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
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
    vector<int> expected = {1, 3, 5, 7, 9};
    vector<int> result = get_odd_collatz(10);
    
    assert(issame(expected, result));
    
    return 0;
}