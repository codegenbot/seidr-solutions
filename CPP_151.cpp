Here's the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto x : lst) {
        if (x > 0 && floor(x) == x) { // Check if number is positive and integer
            if (static_cast<int>(x) % 2 != 0) { // Check if number is odd
                sum += static_cast<long long>(x) * static_cast<long long>(x); // Add square of the number to sum
            }
        }
    }
    return sum;
}