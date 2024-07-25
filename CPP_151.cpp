Here's the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && int(num) == num) { // Check if number is positive and integer
            if (int(num) % 2 != 0) { // Check if number is odd
                sum += pow(int(num), 2); // Calculate the square of the number and add it to the sum
            }
        }
    }
    return sum;
}