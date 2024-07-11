Here's the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && num == floor(num)) { // check if number is non-negative and integer
            if (num % 2 != 0) { // check if number is odd
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}