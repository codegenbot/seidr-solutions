Here's the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(float num : lst){
        if(std::abs(static_cast<int>(num)) % 2 != 0 && num >= 0){
            sum += std::pow(num, 2);
        }
    }
    return sum;
}