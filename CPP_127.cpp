// Returns whether the given number is prime
bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

string intersection(vector<int> interval1, vector<int> interval2){
    // Find the maximum start and minimum end of the two intervals
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);
    
    // If start is greater than end, the intervals don't intersect
    if (start > end)
        return "NO";
    
    // Check if the length of the intersection is a prime number
    int length = end - start + 1;
    if (isPrime(length))
        return "YES";
    else
        return "NO";
}