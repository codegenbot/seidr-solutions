Here is the completed code:

int skjkasdkd(vector<int> lst){
    int maxPrime = -1; // Initialize maxPrime as -1
    for(int i : lst){ // Loop through each element in the list
        if(i > 1 && isPrime(i)){ // Check if the number is prime and greater than 1
            if(i > maxPrime) maxPrime = i; // Update maxPrime if necessary
        }
    }
    int sum = 0;
    while(maxPrime > 0){ // Loop until maxPrime becomes 0
        sum += maxPrime % 10; // Add the last digit of maxPrime to sum
        maxPrime /= 10; 
    }
    return sum;
}

bool isPrime(int n){
    if(n <= 1) return false; // Base cases: numbers less than or equal to 1 are not prime
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false; // If the number is divisible by any integer from 2 to sqrt(n), it's not prime
    }
    return true; // The number is prime
}