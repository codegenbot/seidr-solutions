def gcd(a, b):
    if b == 0:
        return abs(a)
    else:
        return gcd(b, a % b)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            result.append(i)
    return result

print(gcd(1, 1))
print(indices_of_substring("banana", "ana"))
print(gcd(4, 400000))
print(indices_of_substring("hello world hello", "ello"))
print(gcd(54, 24))
print(indices_of_substring("abcdefgabcdefg", "cde"))
print(gcd(4200, 3528))
print(indices_of_substring("a" * 10000 + "b" * 5000 + "a" * 3000, "a"))
print(gcd(820000, 63550))