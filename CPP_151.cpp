int main_function() {
    auto odd_sum = {1,2,3}; 
    int sum_of_odds = 0; 
    for (int num : odd_sum) {
        if(num % 2 != 0)
            sum_of_odds += num;
    }
    return 0;
}