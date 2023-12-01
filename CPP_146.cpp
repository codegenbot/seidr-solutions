int specialFilter(vector<int> nums){
    int count = 0;

    for(int num : nums){
        string s = to_string(num);
        if(num > 10 && (s.front()-'0') % 2 != 0 && (s.back()-'0') % 2 != 0){
            count++;
        }
    }

    return count;
}