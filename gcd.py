def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices

inputs = input().split()
if len(inputs) == 2:
    a, b = map(int, inputs)
    result = gcd(a, b)
    print(result)
else:
    text, target = inputs
    indices_result = indices_of_substring(text, target)
    print(indices_result)