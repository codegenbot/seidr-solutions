int prod_signs(vector<int> arr){
    int product = 1;
    int sumMagnitude = 0;

    for(int num : arr) {
        if(num == 0)
            return -32768; // special case: if arr contains zero, return -32768

        product *= (num > 0 ? 1 : -1);
        sumMagnitude += abs(num);
    }

    return product * sumMagnitude;
}