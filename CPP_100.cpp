vector<int> result;
    while (n > 0) {
        result.push_back(n);
        n = (n % 2 == 0) ? n + 2 : n + 1;
    }
    return result;
}