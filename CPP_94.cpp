#include <vector>

int skjkasdkd(std::vector<int> lst){
    int maxPrimeSum = 0;
    
    for (int num : lst) {
        if (num <= 1) continue;
        
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > maxPrimeSum) {
                maxPrimeSum = sum;
            }
        }
    }
    
    return maxPrimeSum;
}