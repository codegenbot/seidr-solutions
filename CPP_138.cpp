bool is_equal_to_sum_even(int n){
    if (n < 8) {
        return false;
    }
    if (n % 4 == 0) {
        return true;
    }
    return false;
}