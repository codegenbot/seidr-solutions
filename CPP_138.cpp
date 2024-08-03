Here is the solution:

bool is_equal_to_sum_even(int n){
    for(int i = 2; i <= n; i += 2) {
        int sum = 0;
        for(int j = 2; j <= (n - i); j += 2) {
            if(i + 2*j > n) break;
            sum += j * 2;
            if(sum == n) return true;
        }
    }
    return false;
}