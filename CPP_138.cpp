bool is_equal_to_sum_even(int n){
    if(n % 2 != 0)
        return false;
    else if(n <= 4)
        return false;
    else
        return true;
}