int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int x : nums) {
        if ((x % 11) % 2 != 0) { 
            count++;
        }
    }
    return count;
}