def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    i = 0
    while i <= len(text) - len(target):
        if text[i : i + len(target)] == target:
            indices.append(i)
            i += len(target)
        else:
            i += 1
    return indices


# test cases
print(gcd(int(input()), int(input())))
print(find_indices(input(), input()))