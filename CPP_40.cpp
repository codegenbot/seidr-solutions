bool triples_sum_to_zero(vector<int> l) {
    sort(l.begin(), l.end());
    for (int i = 0; i < l.size() - 2; i++) {
        int j = i + 1;
        int k = l.size() - 1;
        while (j < k) {
            if (l[i] + l[j] + l[k] == 0)
                return true;
            else if (l[i] + l[j] + l[k] < 0)
                j++;
            else
                k--;
        }
    }
    return false;
}