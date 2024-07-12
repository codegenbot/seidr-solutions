def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    index = 0
    while index < len(text):
        if text[index:index + len(target)] == target:
            result.append(index)
            index += len(target)
        else:
            index += 1
    return result

print(gcd(int(input()), int(input())))
print(indices_of_substring(input(), input()))