def modp(n: int, p: int):
    if p == 1:
        return 0
    print(f"The modular power of {n} to the power {p-1} mod {p} is {pow(n, p-1, p)*n%p}.")