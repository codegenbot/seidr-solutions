long long function_name(const std::vector<float>& lst) {
    long long odd_sum = 0;
    
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += num * num;
        }
    }
    
    return odd_sum;
}