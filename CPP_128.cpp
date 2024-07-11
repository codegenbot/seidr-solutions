int prod_signs(vector<int> arr){
    long long product = 1;
    long long sum = 0;

    for(int x : arr){
        if(x == 0) return -32768; // handle zero in the array
        product *= (x > 0 ? 1 : -1);
        sum += abs(x);
    }

    return product * sum;
}