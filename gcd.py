def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            result.append(i)
    return result


# test cases
print(gcd(1, 1))
print(indices_of_substring("Hello World", "o"))
print(gcd(4, 400000))
print(indices_of_substring("bananaana", "ana"))
print(gcd(54, 24))
print(
    indices_of_substring(
        "This is a test string for the indices of substring problem.", "test"
    )
)
print(gcd(4200, 3528))
print(indices_of_substring("Python programming language is awesome", "language"))
print(gcd(820000, 63550))
print(
    indices_of_substring(
        "Hello world and welcome to this code contest problem. It's a fun challenge!",
        "welcome",
    )
)