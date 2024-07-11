int prod_signs(vector<int> arr){
    int sign_product = 1;
    long long sum_magnitude = 0;
    
    for(int num : arr){
        if(num != 0){
            sign_product *= (num > 0 ? 1 : -1);
            sum_magnitude += abs(num);
        }
    }
    
    return (arr.empty()) ? INT_MIN : sign_product * sum_magnitude;
}