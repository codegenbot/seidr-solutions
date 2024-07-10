```
import random


def modp(n: int, p: int):
    if p < 3:
        return False
    if pow(2, n - 1, p) == 1:
        return False
    for _ in range(p - 2):
        a = random.randint(2, p - 2)
        if pow(a, n, p) == 1:
            continue
        if pow(a, (n - 1) // 2, p) != p - 1:
            return False
    return True