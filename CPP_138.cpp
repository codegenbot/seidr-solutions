Here is the completed code:

bool is_equal_to_sum_even(int n){
    for (int i = 2; i <= n && i % 2 == 0; i += 2) {
        int sum = 0;
        for (int j = 2; j <= i && j % 2 == 0; j += 2) {
            if (i != j) {
                sum += j;
            }
        }
        if (sum == n) return true;
    }
    return false;
}