int prod_signs(vector<int> arr){
    int sign_product = 1;
    long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // empty array or contains zero
        }
        int sign = (num > 0) ? 1 : ((num < 0) ? -1 : 0);
        sum_of_magnitudes += abs(num); 
        sign_product *= sign;
    }

    return sum_of_magnitudes * sign_product;
}