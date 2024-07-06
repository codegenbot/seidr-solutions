long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    vector<float> numbers = lst; 
    for (float num : numbers) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}