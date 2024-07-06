```
def modp(n: int, p: int):
    if p == 1:
        return n
    else:
        input_str = f"Enter a number to perform power modulo operation (n={n}, p={p}): "
        num = int(input())
        return pow(num, p - 1, p) * num % p