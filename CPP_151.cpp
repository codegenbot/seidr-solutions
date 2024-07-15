long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && num == floor(num) && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<int>(pow(num, 2));
        }
    }
    return sum;
}