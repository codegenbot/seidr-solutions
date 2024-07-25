Here is the solution:

int count_nums(vector<int> n){
    int count = 0;
    for(int num : n){
        if(num < 0) num = -num; // make all numbers positive
        bool hasPositiveSum = false;
        while(num > 0 || num < 0){ // iterate through digits of the number
            int digit = num % 10;
            num /= 10;
            if(digit != 0 && (digit > 0 || (num >= 0 && num % 10 > 0))) hasPositiveSum = true; // check if current digit is non-zero and its sum with next digits is positive
        }
        if(hasPositiveSum) count++; 
    }
    return count;
}