num1, num2 = map(int, input().split())
def gcd(a, b):
    if b == 0:
        return abs(a)
    return gcd(b, a % b)

print(gcd(num1, num2))