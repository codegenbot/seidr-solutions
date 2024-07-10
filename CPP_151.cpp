```cpp
long long doubleTheDifference(vector<float> lst){
    long long sum = 0;
    for(auto x : lst){
        if(int(x) > 0 && int(x) == (int)x){
            sum += pow(int(x), 2);
        }
    }
    return sum;