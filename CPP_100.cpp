Here is the solution:

vector<int> make_a_pile(int n) {
    vector<int> result;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            result.push_back(i * 2 - 1);
        else
            result.push_back(i * 2);
    }
    return result;
}