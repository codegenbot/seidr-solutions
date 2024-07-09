std::vector<int> completeCode(int n) {
    std::vector<int> result = {3};
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            result.push_back(result[i - 1] + result[i - 2] + result[i + 1]);
        }
    }
    return result;
}

assert(issame(completeCode(1), {1, 3}));