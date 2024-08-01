Here is the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && (int)num == (int)num) { // check if number is positive and integer
            if ((int)num % 2 != 0) { // check if number is odd
                sum += pow((int)num, 2); // add the square of the odd number to the sum
            }
        }
    }
    return sum;
}