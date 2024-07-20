int specialFilter(vector<int> nums){
    int count = 0;
    for (int num : nums) {
        string numStr = to_string(abs(num));
        if (numStr.front() % 2 == 1 && numStr.back() % 2 == 1 && num > 10) {
            count++;
        }
    }
    return count;
}