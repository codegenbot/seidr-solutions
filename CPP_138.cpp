Here is the completed code:

bool is_equal_to_sum_even(int n) {
    for (int i = 2; i <= n && !found; i += 2) {
        int sum = 0;
        for (int j = 2; j <= (n - i) / 2 && !found; j += 2) {
            if ((j + i) > n) break;
            for (int k = 2; k <= (n - i - j) / 2 && !found; k += 2) {
                int last = (n - i - j) % 2 ? 1 : 2;
                for (int l = 2; l <= last && !found; l += 2) {
                    if ((i + j + k + l) == n) {
                        found = true;
                        break;
                    }
                }
            }
        }
    }
    return found;
}