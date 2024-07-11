int prod_signs(vector<int> arr){
    long long sign_product = 1;
    for(int num : arr){
        if(num == 0) return -32768;
        sign_product *= (num > 0 ? 1 : -1);
    }
    if(arr.empty()) return -32768;
    long long sum_magnitude = 0;
    for(int num : arr){
        sum_magnitude += abs(num);
    }
    return sign_product * sum_magnitude;
}