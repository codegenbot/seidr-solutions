def histogram(test):
    counts = {}
    for char in test:
        if char not in counts:
            counts[char] = 1
        else:
            counts[char] += 1
    return counts