int sum = 0;
    for (const auto &elem : q) {
        sum += elem;
    }
    if (sum > w || q != vector<int>(q.rbegin(), q.rend())) {
        return false;
    }
    return true;
}