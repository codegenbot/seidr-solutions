int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10){
            string numAsString = to_string(abs(num));
            if(numAsString.front() % 2 != 0 && numAsString.back() % 2 != 0){
                count++;
            }
        }
    }
    return count;
}