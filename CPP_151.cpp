Here's the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto x : lst){
        if(int(x) > 0 && int(x) == x){ // check if number is positive integer
            sum += pow(int(x),2); // calculate square of the number
        }
    }
    return sum;
}