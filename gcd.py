def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            j = i
            while True:
                if text[j:].startswith(target):
                    result.append(j)
                    j += len(target)
                else:
                    break
    return result


# Example usage:
print(gcd(1, 1))
print(indices_of_substring("hellohello", "ello"))