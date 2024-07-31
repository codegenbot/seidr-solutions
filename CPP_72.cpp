int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }

    if (sum <= w && q == vector<int>(q.rbegin(), q.rend())) {
        return true;
    } else {
        return false;
    }
}