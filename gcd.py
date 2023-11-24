from math import gcd

def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text.startswith(target, i)]

print(gcd(int(input()), int(input())))
text = input()
target = input()
print(indices_of_substring(text, target))