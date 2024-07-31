int prod_signs(vector<int> arr){
    int sign_product = 1;
    long long sum_of_magnitudes = (arr.empty()) ? -32768 : 0;

    for(int num: arr){
        if(num < 0) sign_product *= -1;
        else if(num > 0) continue;
        sum_of_magnitudes += abs(num);
    }

    return sum_of_magnitudes * sign_product;
}