def gcd(a, b):
    a = abs(a)
    b = abs(b)
    if a == 0 or b == 0:
        return max(a, b)
    while b:
        a, b = b, a % b
    return a

a = int(input())
b = int(input())
print(int(gcd(a, b)))

text = input()[:-1]
target = input()
print(indices_of_substring(text, target))
