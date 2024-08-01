int fizz_buzz(int n) {
    int count = 0;
    for(int i=7; i<n; i+=7) {
        if(i%11==0 || i%13==0) {
            count++;
        }
    }
    return count;
}