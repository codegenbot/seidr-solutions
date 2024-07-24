def gcd():
    n = int(input("Enter first integer: "))
    m = int(input("Enter second integer: "))

    def _gcd(a, b):
        while b != 0:
            a, b = b, a % b
        return abs(a)

    print(_gcd(n, m))


gcd()