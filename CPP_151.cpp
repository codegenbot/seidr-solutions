Here is the solution:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto num : lst){
        if(num >= 0 && (int)num == num){ // Check if number is positive and integer
            if((int)num % 2 != 0){ // Check if number is odd
                sum += (long long)num * num; // Add square of odd number to sum
            }
        }
    }
    return sum;
}