def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text[i:i+len(target)] == target]

a = int(input())
b = int(input())

result = gcd(a, b)
print(result)

text = input()
target = input()

indices_result = indices_of_substring(text, target)
print(indices_result)