Here is the completed code:

```cpp
int prod_signs(vector<int> arr){
    if(arr.empty()) return -32768;
    int sign = 1;
    long long sum = 0;
    for(auto num : arr) {
        sign *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        sum += abs(num);
    }
    return sum * sign;
}