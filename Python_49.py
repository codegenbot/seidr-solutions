```
import math


def modp(n: int, p: int) -> int:
    if math.gcd(n, p) != 1:
        return -1
    i = 0
    while True:
        i += 1
        if (n * i) % p == 1:
            return i


num = int(input("Enter the number: "))
prime = int(input("Enter the prime number: "))

result = modp(num, prime)
print(f"The result is {result}")