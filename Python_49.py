```
import random

def modp(n: int, p: int):
    if pow(2, n - 1, p) == 1:
        return False
    for _ in range(p - 2):
        a = random.randint(2, p - 2)
        if pow(a, n, p) == 1:
            continue
        if pow(a, (n - 1) // 2, p) != p - 1:
            return False
    return True

n = int(input("Enter the value of n: "))
p = int(input("Enter the value of p: "))

result = modp(n, p)

print(f"The result is {result}")