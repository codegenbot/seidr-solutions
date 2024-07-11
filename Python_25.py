```
from typing import List
import math

def find_prime_numbers(n: int) -> List[int]:
    prime_numbers = []
    for possiblePrime in range(2, n + 1):
        isPrime = True
        for num in range(2, int(math.sqrt(possiblePrime)) + 1):
            if possiblePrime % num == 0:
                isPrime = False
                break
        if isPrime:
            prime_numbers.append(possiblePrime)
    return prime_numbers

while True:
    try:
        n = int(input("Enter an integer to find prime numbers until {}: ".format(n)))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")
        continue

print(find_prime_numbers(n))