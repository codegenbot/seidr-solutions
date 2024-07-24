int specialFilter(vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            string numStr = to_string(num);
            if (numStr.front() % 2 == 1 && numStr.back() % 2 == 1) {
                count++;
            }
        }
    }
    return count;
}