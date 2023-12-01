int main() {
    int x;
    // Take input for x
    cin >> x;

    // Check the functionality of change_base function
    assert(change_base(x, x + 1) == to_string(x));

    return 0;
}