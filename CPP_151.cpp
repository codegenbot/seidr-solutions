long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // Check if number is positive and integer
            if (floor(sqrt(num)) * floor(sqrt(num)) == num) { // Check if number is square of an integer
                sum += num * num;
            }
        }
    }
    return sum;
}