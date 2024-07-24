def gcd(a, b):
    if b == 0:
        return abs(a)
    return gcd(b, a % b)

num1, num2 = map(int, input("Enter two integers separated by a space: ").split())
print(gcd(num1, num2))