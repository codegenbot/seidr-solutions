def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    pos = 0
    while True:
        pos = text.find(target, pos)
        if pos == -1:
            break
        result.append(pos)
        pos += 1

    return result


# Testing the functions
print(gcd(1, 1))
print(indices_of_substring("banana", "ana"))

print(gcd(4, 400000))
print(indices_of_substring("hellohellohello", "hello"))

print(gcd(54, 24))
print(indices_of_substring("abcdefgabcdefg", "abcd"))

print(gcd(4200, 3528))
print(indices_of_substring("abcdefghijklmnopqrstuvwxyz", "abc"))

print(gcd(820000, 63550))
print(indices_of_substring("a" * 10000 + "b" * 5000, "ab"))