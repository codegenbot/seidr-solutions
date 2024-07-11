if(arr.empty()) return -32768;
    
    int sum = 0;
    int product = 1;
    
    for(int num : arr){
        if(num > 0) sum += num;
        else if(num < 0) sum -= num;
        
        if(num != 0) product *= num / abs(num);
    }
    
    return sum * product;
}