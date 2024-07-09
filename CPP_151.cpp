long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && is_integer(num)) {
            sum += pow(static_cast<int>(num), 2);
        }
    }
    return sum;
}

bool is_integer(float f) {
    return floor(f) == f;
}