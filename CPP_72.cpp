int sum = 0;
    for (int num : q) {
        sum += num;
    }

    if (sum > w) {
        return false;
    }

    vector<int> rev_q = q;
    reverse(rev_q.begin(), rev_q.end());

    if (q != rev_q) {
        return false;
    }

    return true;
}