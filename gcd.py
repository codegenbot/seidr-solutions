```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a) if a else 0

a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))