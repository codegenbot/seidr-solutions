def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text) - len(target) + 1:
        if text[i : i + len(target)] == target:
            result.append(i)
            i += 1
        else:
            i += 1
    return result


# test cases
print(gcd(1, 1))
print(indices_of_substring("banana", "ana"))
print(gcd(4, 400000))
print(indices_of_substring("hello world hello", "hello"))
print(gcd(54, 24))
print(indices_of_substring("abcdefgabcdefg", "abc"))
print(gcd(4200, 3528))
print(indices_of_substring("a" * 10000 + "b" * 5000, "ab"))
print(gcd(820000, 63550))
print(indices_of_substring("a" * 20000 + "b" * 10000, "ab"))