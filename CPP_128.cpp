int prod_signs(vector<int> arr){
    int sign_product = 1;
    long long sum = 0;

    for(int i: arr){
        if(i == 0) continue;
        int sign = (i > 0)? 1 : ((i < 0)? -1 : 0);
        sign_product *= sign;
        sum += abs(i);
    }

    return sign_product * sum;
}