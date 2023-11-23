import sys
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a
def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices
a = int(sys.stdin.readline().strip())
b = int(sys.stdin.readline().strip())
result = gcd(a, b)
print(result)
text = sys.stdin.readline().strip()
target = sys.stdin.readline().strip()
indices_result = indices_of_substring(text, target)
print(indices_result)