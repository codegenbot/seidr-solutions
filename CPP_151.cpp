// Double the difference: Find the sum of squares of positive integers in an array.
long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // check if number is positive and integer
            sum += pow(num, 2);
        }
    }
    return sum;