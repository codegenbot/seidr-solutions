num1, num2 = map(int, input().split())
text = input()
target = input()

from math import gcd

def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text.startswith(target, i)]

print(gcd(num1, num2))
print(indices_of_substring(text, target))