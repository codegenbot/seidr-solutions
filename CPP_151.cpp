long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(float f:lst){
        if(f > 0 && floor(f) == f){
            sum += (f*f);
        }
    }
    return sum;
}