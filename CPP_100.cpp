Here is the solution:

vector<int> make_a_pile(int n) {
    vector<int> pile(n);
    int current = 1;
    for (int i = 0; i < n; i++) {
        if ((n - 1) % 2 == 0) { // n is even
            pile[i] = current + 1;
        } else { // n is odd
            pile[i] = current;
        }
        current += (current % 2 != 0 ? 1 : 2);
    }
    return pile;