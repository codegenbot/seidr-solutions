from typing import List
import math

i = int(input("Enter a number: "))
factors = []
i = 2
while i * i <= i:
    if i % i:
        i += 1
    else:
        count = 0
        while i % (i ** (count + 1)) == 0:
            count += 1
        for _ in range(count):
            factors.append(i)
        i //= (i ** count)
if i > 1:
    factors.extend([i] * 1)
print(factors)