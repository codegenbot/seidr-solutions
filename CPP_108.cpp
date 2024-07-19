int count_nums(vector<int> n){
    int count = 0;
    for(int num : n){
        int sumOfDigits = 0;
        int numToCheck = abs(num);
        while(numToCheck > 0){
            sumOfDigits += numToCheck % 10;
            numToCheck /= 10;
        }
        if(sumOfDigits > 0){
            count++;
        }
    }
    return count;
}