def histogram(test):
    counts = {}
    for letter in test:
        if letter not in counts:
            counts[letter] = 1
        else:
            counts[letter] += 1
    max_count = max(counts.values())
    return {k: v for k, v in counts.items() if v == max_count}