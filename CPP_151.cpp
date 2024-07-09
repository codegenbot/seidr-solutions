long long double_the_difference(vector<float> numbers) {
    long long sum = 0;
    for (float number : numbers) {
        if (number > 0 && modf(number, &number) == 0) {
            sum += number * number;
        }
    }
    return sum;
}