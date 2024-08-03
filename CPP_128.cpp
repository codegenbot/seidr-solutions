int prod_signs(vector<int> arr){
    int sign_product = 1;
    long long sum = 0;

    for(int i: arr) {
        if(i == 0) continue;
        sign_product *= (i > 0)? 1 : -1;
        sum += abs(i);
    }

    return (arr.empty())? -32768 : sign_product * sum;
}