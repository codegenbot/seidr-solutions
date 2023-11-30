int prod_signs(vector<int> arr){
    if(arr.empty()) return -32768;
    
    int product = 1;
    int sum = 0;
    
    for(int num : arr){
        int sign;
        
        if(num > 0) sign = 1;
        else if(num < 0) sign = -1;
        else sign = 0;
        
        product *= sign;
        sum += abs(num);
    }
    
    return product * sum;
}