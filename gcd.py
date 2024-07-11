def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos == -1:
            break
        result.append(pos + 1)
        start = pos + 1
    return result


# Testing the functions
print(gcd(1, 1))
print(indices_of_substring("banana", "na"))
print(gcd(4, 400000))
print(indices_of_substring("hellohellohello", "hello"))
print(gcd(54, 24))
print(indices_of_substring("abcdefg", "cde"))
print(gcd(4200, 3528))
print(indices_of_substring("thequickbrownfoxjumpedoverthelazydog", "the"))
print(gcd(820000, 63550))
print(indices_of_substring("abcdefghijklmnopqrstuvwxyz", "abc"))