Here is the completed code:

```cpp
int prod_signs(vector<int> arr){
    int sign = 1;
    long long sum = 0;

    if(arr.empty()) return -32768;

    for(int i:arr){
        sign *= (i > 0)?1:(i < 0)?-1:0;
        sum += abs(i);
    }

    return sum * sign;
}