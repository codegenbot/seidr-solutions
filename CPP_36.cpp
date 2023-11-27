int fizz_buzz(int n){
    int count = 0;
    for(int i=11; i<n; i+=11){
        int temp = i;
        while(temp > 0){
            if(temp % 10 == 7){
                count++;
            }
            temp /= 10;
        }
    }
    for(int i=13; i<n; i+=13){
        int temp = i;
        while(temp > 0){
            if(temp % 10 == 7){
                count++;
            }
            temp /= 10;
        }
    }
    return count;
}