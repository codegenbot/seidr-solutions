```cpp
long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto x : lst){
        if(int(x) > 0 && int(x) == (int)x){
            sum += pow((long long)x, 2);
        }
    }
    return sum;