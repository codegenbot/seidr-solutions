```
def count_up_to(n):
    # Initialize an empty list to store the prime numbers
    prime_list = []

    # Iterate from 2 to n+1
    for i in range(2, n+2):
        # Check if i is a prime number
        if is_prime(i):
            # If it is, add it to the list
            prime_list.append(i)

    return prime_list

def is_prime(n):
    # Check if n is greater than 1
    if n > 1:
        # Iterate from 2 to the square root of n
        for i in range(2, int(n**0.5) + 1):
            # If n is divisible by any number between 2 and the square root of n, it is not prime
            if n % i == 0:
                return False
        # If n is not divisible by any number between 2 and the square root of n, it is prime
        return True
    # If n is less than or equal to 1, it is not prime
    return False
```