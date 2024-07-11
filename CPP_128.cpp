if(arr.empty()) return -32768;
    int signProduct = 1;
    int sumMagnitude = 0;
    for(int num : arr){
        if(num > 0) signProduct *= 1;
        else if(num < 0) signProduct *= -1;
        sumMagnitude += abs(num);
    }
    return signProduct * sumMagnitude;
}