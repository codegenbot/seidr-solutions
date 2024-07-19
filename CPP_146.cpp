int specialFilter(vector<int> nums){
    int count = 0;
    for(auto num : nums){
        if(num > 10){
            string s = to_string(num);
            if((s[0] - '0') % 2 != 0 && (s[s.size()-1] - '0') % 2 != 0){
                count++;
            }
        }
    }
    return count;
}