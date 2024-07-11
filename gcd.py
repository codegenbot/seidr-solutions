```
values = input("Enter integers separated by space: ").split()
a, b = map(int, values)
print(gcd(a, b))
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)