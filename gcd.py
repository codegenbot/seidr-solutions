def gcd(m, n):
    while n:
        m, n = n, m % n
    return abs(m)


def find_indices(text, target):
    indices = []
    start_index = 0
    while True:
        start_index = text.find(target, start_index)
        if start_index == -1:
            break
        indices.append(start_index + 1)
        start_index += 1

    return indices