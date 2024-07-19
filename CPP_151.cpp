Here's the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto x : lst){
        if(x > 0 && floor(x) == x && (int)x % 2 != 0){
            sum += pow((int)x, 2);
        }
    }
    return sum;
}