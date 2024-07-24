int prod_signs(vector<int> arr){
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for(int num : arr){
        if(num == 0) return 0; // If there's a zero, product of signs will be zero
        int sign = (num > 0)? 1: ((num < 0)? -1: 0);
        sum_of_magnitudes += abs(num);
        sign_product *= sign;
    }

    if(arr.empty()) return -32768; // Return -32768 for empty array

    return (sign_product * sum_of_magnitudes);
}