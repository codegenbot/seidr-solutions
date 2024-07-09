```
from typing import List
import math

def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append(i ** count)
    if n > 1:
        factors.append(n)
    return factors

while True:
    try:
        n = input("Enter an integer: ")  
        if not n.replace('.', '', 1).isdigit():
            print("Invalid input. Please enter an integer.")
            continue
        n = int(n)  
        result = factorize(n)  
        print(result)
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")