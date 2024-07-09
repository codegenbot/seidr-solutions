Here is the completed code:

bool is_equal_to_sum_even(int n){
    for (int i = 2; i <= n && i % 2 == 0; i += 2) {
        int sum = 0;
        for (int j = 2; j <= n - i && j % 2 == 0; j += 2) {
            for (int k = 2; k <= n - i - j && k % 2 == 0; k += 2) {
                for (int l = 2; l <= n - i - j - k && l % 2 == 0; l += 2) {
                    if (i + j + k + l == n)
                        return true;
                }
            }
        }
    }
    return false;
}