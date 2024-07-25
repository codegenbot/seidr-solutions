int sum = 0;
    for (int num : q) {
        sum += num;
    }
    if (sum > w || q != vector<int>(q.rbegin(), q.rend())) {
        return false;
    }
    return true;
}