sort(l.begin(), l.end());
    for (int i = 0; i < l.size() - 2; i++) {
        int j = i + 1;
        int k = l.size() - 1;
        while (j < k) {
            int sum = l[i] + l[j] + l[k];
            if (sum == 0) {
                return true;
            } else if (sum < 0) {
                j++;
            } else {
                k--;
            }
        }
    }
    return false;
}