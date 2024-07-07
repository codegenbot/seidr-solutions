Here is the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { // ignore negative and non-integer numbers
            sum += pow((int)x, 2); // square the integer part of the number
        }
    }
    return sum;
}