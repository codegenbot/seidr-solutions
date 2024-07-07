int prod_signs(vector<int> arr){
    int product = 1;
    long sum = 0;

    for(int i : arr){
        if(i == 0) continue;
        int sign = (i > 0)? 1 : ((i < 0)? -1 : 0);
        sum += abs(i);
        product *= sign;
    }

    return (arr.empty())? -32768 : product * sum;
}