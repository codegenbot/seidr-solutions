Here is the completed code:

```cpp
int prod_signs(vector<int> arr){
    if(arr.empty()) return -32768;
    int sign = 1;
    long long sum = 0;
    for(int i : arr){
        if(i < 0) sign *= -1;
        else if(i > 0) sign *= 1;
        sum += abs(i);
    }
    return (long long)(sign * sum);
}