int prod_signs(vector<int> arr){
    if (arr.empty()) {
        return -32768;
    }
    int product = 1;
    for (int i = 0; i < arr.size(); i++) {
        product *= arr[i] >= 0 ? 1 : -1;
    }
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += abs(arr[i]);
    }
    return sum * product;
}

Note: The code initializes `product` variable to 1 and multiplies it by 1 if the number is non-negative and -1 if the number is negative. It calculates the sum of magnitudes of all numbers in the vector and returns the product of the sum and the product of signs. The function handles the case when the vector is empty by returning -32768.