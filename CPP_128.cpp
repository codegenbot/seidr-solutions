int prod_signs(vector<int> arr){
    int product = 1;
    long sum = 0;

    for(int i : arr) {
        if(i == 0) continue;
        product *= (i > 0 ? 1 : -1);
        sum += abs(i);
    }

    return (arr.empty()) ? -32768 : product * sum;
}