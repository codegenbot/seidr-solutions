long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && int(num) == num) { // Check if the number is positive and an integer
            if (int(num) % 2 != 0) { // Check if the number is odd
                sum += pow(int(num), 2); // Add the square of the number to the sum
            }
        }
    }
    return sum;
}