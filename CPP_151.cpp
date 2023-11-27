long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto num : lst){
        if(floor(num) == num && num >= 0 && static_cast<int>(num) % 2 != 0){
            sum += pow(num, 2);
        }
    }
    return sum;
}