int main() {
    vector<int> get_odd_collatz(int n);
    assert(issame(get_odd_collatz(1), {1}));
    assert(issame(get_odd_collatz(7), {1, 3, 5, 7}));

    return 0;
}