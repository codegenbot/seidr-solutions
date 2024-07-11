def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    index = 0
    while index < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        result.append(index + pos)
        index += pos + 1
    return result


# Test cases
print(gcd(1, 1))
print(indices_of_substring("hello world", "world"))

print(gcd(4, 400000))
print(indices_of_substring("banana banana", "ana"))

print(gcd(54, 24))
print(indices_of_substring("abcdefabcdef", "abc"))

print(gcd(4200, 3528))
print(indices_of_substring("bookkeeper bookkeeper bookkeeper", "book"))

print(gcd(820000, 63550))
print(indices_of_substring("hellohellohello hellohellohello hellohellohello", "hello"))