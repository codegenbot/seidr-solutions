#include <vector>
#include <algorithm>

int skjkasdkd(vector<int> lst){
    int sum = 0;
    for(int n : lst) {
        if(isPrime(n)) {
            int temp = n;
            while(temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
        }
    }
    return sum;
}