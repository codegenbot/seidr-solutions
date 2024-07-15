int prod_signs(vector<int> arr){
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for(int i : arr){
        if(i == 0) continue; // Ignore zero valued numbers
        int sign = (i > 0)? 1: ((i < 0)? -1: 0);
        sign_product *= sign;
        sum_of_magnitudes += abs(i);
    }

    return (arr.empty())? -32768 : sign_product * sum_of_magnitudes;
}