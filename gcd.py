def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            result.append(pos)
            start = pos + 1
        else:
            break
    return result


# Test cases
print(gcd(1, 1))
print(indices_of_substring("banana", "ana"))
print(gcd(4, 400000))
print(indices_of_substring("hellohellohello", "hello"))
print(gcd(54, 24))
print(indices_of_substring("abcdefgabcdefg", "abc"))
print(gcd(4200, 3528))
print(indices_of_substring("a" * 10000 + "b" * 20000, "ab"))
print(gcd(820000, 63550))