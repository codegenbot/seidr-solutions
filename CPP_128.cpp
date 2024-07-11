int result = 0;
    int signMultiplier = 1;
    
    if(arr.empty()){
        return -32768;
    }
    
    for(int num : arr){
        result += abs(num);
        signMultiplier *= (num > 0) - (num < 0);
    }
    
    return result * signMultiplier;
}