int sum = 0;
    for (int num : q) {
        sum += num;
    }

    if (sum > w) {
        return false;
    }

    vector<int> reversed = q;
    reverse(reversed.begin(), reversed.end());

    return q == reversed;
}