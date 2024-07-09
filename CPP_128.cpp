Here is the solution:

int prod_signs(vector<int> arr){
    int sign_product = 1;
    if(arr.empty()) return -32768;
    for(int num : arr){
        if(num != 0) sign_product *= (num > 0 ? 1 : -1);
    }
    int sum_of_magnitudes = 0;
    for(int num : arr){
        if(num == 0) continue;
        sum_of_magnitudes += abs(num);
    }
    return sign_product * sum_of_magnitudes;
}