vector<int> make_a_pile(int n) {
    vector<int> result;
    int stones = n;

    for (int i = 0; i < n; i++) {
        if (stones % 2 == 1)
            result.push_back(stones);
        else
            result.push_back(stones + 1);

        stones += (stones % 2 ? 2 : 1);
    }

    return result;
}