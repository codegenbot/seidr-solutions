```cpp
long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // check if number is positive and an integer
            if (floor(sqrt(num)) * floor(sqrt(num)) == num) { // check if number is odd
                sum += num * num; // add the square of the number to the sum
            }
        }
    }
    return sum;
}