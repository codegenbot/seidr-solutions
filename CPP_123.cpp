bool same(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        result.push_back(n);
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(same({get_odd_collatz(1)}, {1}));
    return 0;
}