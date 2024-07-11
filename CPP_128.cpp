int prod_signs(vector<int> arr){
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for(int num : arr){
        if(num == 0) continue;
        int sign = (num > 0)? 1 : ((num < 0)? -1 : 0);
        sign_product *= sign;
        sum_of_magnitudes += abs(num);
    }

    return sign_product * sum_of_magnitudes;
}