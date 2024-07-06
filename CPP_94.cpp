```cpp
int calculateSumOfDigitsLargestPrime(std::vector<int> lst) {
    int max = 0;
    for (int i : lst) {
        bool isPrime = true;
        if (i <= 1)
            continue;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && i > max)
            max = i;
    }
    
    int sum = 0;
    while (max > 0) {
        sum += max % 10;
        max /= 10;
    }
    
    return sum;
}