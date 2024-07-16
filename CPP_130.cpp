vector<int> result;
    if (n == 0) {
        result.push_back(0);
        return result;
    }
    if (n == 1) {
        result.push_back(3);
        return result;
    }
    result.push_back(3);
    result.push_back(1);
    int prev = 3, curr = 1, next = 2;
    for (int i = 3; i <= n; ++i) {
        int temp = (i % 2 == 0) ? 1 + i / 2 : prev + curr + next;
        result.push_back(temp);
        prev = curr;
        curr = next;
        next = temp;
    }
    return result;
}