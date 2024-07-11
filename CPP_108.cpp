int count_nums(vector<int> n){
    int count = 0;
    for(int num : n){
        int sum = 0;
        int numCopy = num < 0 ? -num : num;
        while(numCopy != 0){
            sum += numCopy % 10;
            numCopy /= 10;
        }
        if(sum > 0){
            count++;
        }
    }
    return count;
}