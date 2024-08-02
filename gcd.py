def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        result.append(i + pos)
        i += pos + 1
    return result


# Testing the functions
print(gcd(1, 1))
print(indices_of_substring("banana", "ana"))

print(gcd(4, 400000))
print(indices_of_substring("hellohellohello", "hello"))

print(gcd(54, 24))
print(indices_of_substring("abcdefgabcdefg", "abc"))

print(gcd(4200, 3528))
print(indices_of_substring("abcdefghijklmnopqrstuvwxyz", "abcd"))

print(gcd(820000, 63550))
print(indices_of_substring("a" * 10000 + "b" * 5000, "ab"))