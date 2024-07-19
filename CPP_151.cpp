Here's the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float x : lst) {
        if (int(x) >= 0 && int(x) == int(x)) { // check if it's non-negative and an integer
            if (fmod(int(x), 2) != 0) { // check if the number is odd
                sum += pow(int(x), 2);
            }
        }
    }
    return sum;
}