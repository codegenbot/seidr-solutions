Here is the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto num : lst) {
        if(std::abs(num) > 1e-9 && std::floor(num + 0.5) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;