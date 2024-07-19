Here is the completed code:

```cpp
string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) {
        sum += i;
    }
    double avg = (double)sum / (m-n+1);
    avg = floor(avg + 0.5); // round down to the nearest integer
    return to_string(abs((int)avg)) ; // convert to binary and remove leading zeros
}