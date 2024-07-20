vector<int> result;
    int stones = n;
    for (int i = 0; i < n; i++) {
        result.push_back(stones);
        stones += (n % 2 == 0) ? 2 : 1;
    }
    return result;
}