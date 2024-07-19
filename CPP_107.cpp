bool issame(vector<int> a, vector<int> b); // Function prototype

vector<int> even_odd_palindrome(int n) {
    vector<int> result = {0, 0};
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        string num = to_string(i);
        string rev_num = num;
        reverse(rev_num.begin(), rev_num.end());
        if (num == rev_num) {
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    result[0] = even;
    result[1] = odd;
    return result;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));  // Test the function
}

bool issame(vector<int> a, vector<int> b) {
    return a == b; // Compare two vectors
}