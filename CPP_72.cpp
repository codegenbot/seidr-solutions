int sum = 0;
    for (int i = 0, j = q.size() - 1; i <= j; i++, j--) {
        if (q[i] != q[j]) {
            return false;
        }
        sum += q[i];
    }
    return sum <= w;
}