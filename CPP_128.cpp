int prod_signs(vector<int> arr){
    int sign_product = 1;
    long long sum = 0;

    for(int i : arr){
        if(i == 0) return -32768; // return -32768 for empty arr
        sign_product *= (i > 0 ? 1 : (i < 0 ? -1 : 0));
        sum += abs(i);
    }

    return sign_product * sum;
}