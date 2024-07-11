Here's the solution:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(float x : lst) {
        if(x > 0 && (int)x == x) { // Check if number is positive and integer
            if((int)x % 2 != 0) { // Check if number is odd
                sum += pow((int)x, 2); // Add the square of the number to the sum
            }
        }
    }
    return sum;
}