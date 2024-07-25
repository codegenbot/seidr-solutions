sort(nums.begin(), nums.end(), [](int a, int b){
    int sum_a = 0, sum_b = 0;
    int a_temp = abs(a), b_temp = abs(b);
    while(a_temp > 0){
        sum_a += a_temp % 10;
        a_temp /= 10;
    }
    while(b_temp > 0){
        sum_b += b_temp % 10;
        b_temp /= 10;
    }
    if(sum_a == sum_b){
        return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
    }
    return sum_a < sum_b;
});
return nums;