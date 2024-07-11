long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(float x : lst) {
        if(x > 0 && (int)x == x) { 
            if((int)x % 2 != 0) { 
                sum += pow((int)x, 2); 
            }
        }
    }
    return sum;
}