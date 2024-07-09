```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    index = 0
    while index < len(text) - len(target) + 1:
        if text[index : index + len(target)] == target:
            result.append(index)
        index += 1
    return result


print(gcd(140163, 924481))
print(indices_of_substring("abcdef", "bcd"))

print(gcd(4, 400000))
print(indices_of_substring("hello world hello", "hello"))

print(gcd(54, 24))
print(indices_of_substring("aaaaaaabaaaaaabc", "aaaaaa"))

print(gcd(4200, 3528))
print(indices_of_substring("abcdefgabcdefg", "abcdefg"))

print(gcd(820000, 63550))
print(indices_of_substring("hello world hello world hello", "hello"))