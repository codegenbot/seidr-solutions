Here is the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && int(num) == num) { // check if number is positive and integer
            if (int(num) % 2 != 0) { // check if number is odd
                sum += pow(int(num), 2); // add square of the number to the sum
            }
        }
    }
    return sum;
}