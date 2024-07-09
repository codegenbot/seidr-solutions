long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (num % 1.0f != 0.0f) { 
                sum += std::pow(num, 2); 
            }
        }
    }
    return sum;
}