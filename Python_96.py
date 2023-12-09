```
def count_up_to(n):
    # Initialize a list to store the prime numbers
    prime_numbers = []
    
    # Edge case: n is equal to 1 or 2, return an empty list
    if n in [1, 2]:
        return prime_numbers
    
    # Iterate from 2 to the square root of n
    for i in range(2, int(n**0.5) + 1):
        # If i is not marked as composite, it is prime
        if not i % 2:
            prime_numbers.append(i)
        
        # Mark the multiples of i as composite
        for j in range(i*i, n+1, i):
            if not j % i:
                break
    
    return prime_numbers
```