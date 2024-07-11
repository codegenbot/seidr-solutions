Here's the completed code:

bool will_it_fly(vector<int> q, int w) {
    bool balanced = true; // check if vector is palindromic
    int sum = 0; // calculate the sum of all elements in the vector

    for (int i = 0; i < q.size(); ++i) {
        if (q[i] != q[q.size() - i - 1]) {
            balanced = false;
        }
        sum += q[i];
    }

    return balanced && sum <= w;
}