int prod_signs(vector<int> arr){
    int productSign = 1;
    long long sumMagnitude = 0;

    for(int num : arr){
        if(num != 0) {
            productSign *= (num > 0 ? 1 : -1);
            sumMagnitude += abs(num);
        }
    }

    return productSign * sumMagnitude == 0 ? -32768 : productSign * sumMagnitude;
}