int prod_signs(vector<int> arr){
    if(arr.empty()) return -32768;
    int sign_product = 1;
    long long sum = 0;
    for(int num : arr){
        sign_product *= (num > 0) ? 1 : ((num < 0) ? -1 : 0);
        sum += abs(num);
    }
    return sum * sign_product;
}