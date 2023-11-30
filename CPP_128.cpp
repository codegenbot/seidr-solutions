int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int product = 1;
    for(int i=0; i<arr.size(); i++){
        product *= arr[i] >= 0 ? 1 : -1; // multiply by the sign of the number
    }
    
    int sum = 0;
    for(int i=0; i<arr.size(); i++){
        sum += abs(arr[i]); // calculate the absolute value of the number and add it to the sum
    }
    
    return product * sum; // return the product of signs and sum of magnitudes
}