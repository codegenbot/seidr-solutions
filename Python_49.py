a = int(input("Enter value of a: "))
n = int(input("Enter value of n: "))
p = int(input("Enter value of p: "))

def power_mod(a, n, p):
    if n < 0:
        a = pow(a, -1, p)
    elif n > 1:
        a = (a * power_mod(a, n - 1, p)) % p
    else:
        a = a % p
    return a

print(power_mod(a, n, p))