```
def factorize(n: int) -> List[int]:
    """Complete the following code given the task description and function signature..
Currently, the code is 
"""
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append([i] * count)
    if n > 1:
        factors.append([n])
    return factors