Here is the completed code:

bool is_equal_to_sum_even(int n){
    for(int i = 2; i <= n; i += 2){
        int sum = 0;
        for(int j = 2; j <= (n-i)/2; j += 2){
            if(sum + 2*j == i) break;
            if(sum + 2*j > i) return false;
            sum += 2*j;
        }
        if(sum == n) return true;
    }
    return false;
}