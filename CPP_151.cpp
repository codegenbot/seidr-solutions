Here is the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && num == static_cast<int>(num)) { // check if number is positive and integer
            if (static_cast<int>(num) % 2 != 0) { // check if number is odd
                sum += pow(static_cast<int>(num), 2);
            }
        }
    }
    return sum;
}