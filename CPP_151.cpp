long long double_the_difference(std::vector<float> lst){
    long long odd_sum = 0;
    for(float x : lst) {
        if(x > 0 && (int)x == x) { 
            if((int)x % 2 != 0) { 
                odd_sum += pow((int)x, 2); 
            }
        }
    }
    return odd_sum;
}