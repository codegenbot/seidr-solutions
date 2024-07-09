```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

text = input()
target = input()

indices = [i for i in range(len(text)) if text.startswith(target, i)]

num1 = int(input())
num2 = int(input())

print(gcd(num1, num2))
print(indices)