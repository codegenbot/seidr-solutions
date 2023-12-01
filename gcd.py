import math

a, b = map(int, input().split())
print(math.gcd(a, b))

text = input()
target = input()
print([i for i in range(len(text)) if text[i:i+len(target)] == target])