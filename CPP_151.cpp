long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (static_cast<int>(num) > 0 && std::floor(num) == num) { 
            if (static_cast<int>(num) % 2 != 0) { 
                sum += std::pow(num, 2); 
            }
        }
    }
    return sum;
}