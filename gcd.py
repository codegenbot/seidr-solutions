num1, num2 = map(int, input().split())
text, target = input(), input()


def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


print(gcd(num1, num2))

print(indices_of_substring(text, target))