int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        string numStr = to_string(num);
        if(num > 10 && numStr.front() % 2 != 0 && numStr.back() % 2 != 0){
            count++;
        }
    }
    return count;
}