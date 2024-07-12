def power_mod(a, n, p):
    a = int(input(f"Enter value of a: "))
    n = int(input(f"Enter value of n: "))
    p = int(input(f"Enter value of p: "))

    if n < 0:
        return pow(power_mod(a, -n, p), -1, p)
    elif n > 0:
        return (a * power_mod(a, n - 1, p)) % p
    else:
        return a % p


print(power_mod(0, 0, 0))