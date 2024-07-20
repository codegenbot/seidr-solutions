int specialFilter(vector<int> nums){
    int count = 0;
    for (int num : nums) {
        string strNum = to_string(abs(num));
        if (strNum.front() % 2 == 1 && strNum.back() % 2 == 1 && num > 10) {
            count++;
        }
    }
    return count;
}