def gcd(m, n):
    while n:
        m, n = n, m % n
    return abs(m)


def find_indices(text, target):
    indices = []
    i = 0
    while i <= len(text) - len(target):
        if text[i : i + len(target)] == target:
            indices.append(i)
            i += 1
        else:
            i += 1
    return indices


m = int(input())
n = int(input())

print(gcd(m, n))

text = input()
target = input()

print(find_indices(text, target))