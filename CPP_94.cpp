int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int num : lst){
        if(num > 1 && (num == 2 || any((num%i) for i in range(3, num)))){
            if(num > maxPrime){
                maxPrime = num;
            }
        }
    }
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}