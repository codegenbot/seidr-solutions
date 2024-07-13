```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(indices_of_substring(text, target))