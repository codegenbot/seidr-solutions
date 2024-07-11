int specialFilter(vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10 && (abs(num) % 10 % 2 == 1) && (abs(num) / pow(10, int(log10(abs(num)))) % 2 == 1)) {
            count++;
        }
    }
    return count;
}