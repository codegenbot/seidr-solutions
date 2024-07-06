vector<int> make_a_pile(int n) {
    vector<int> result;
    int i = 1, num;

    while (i <= n) {
        if (n % 2 == 1) { // Check if n is odd
            num = i;
        } else {
            num = i + 1; // If n is even, then next number should be even
        }
        result.push_back(num);
        i += num % 2 ? 2 : 2; // Increment by 2 for even numbers and 2+1 for odd numbers
    }

    return result;
}