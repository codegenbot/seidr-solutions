def histogram(test):
    if not test:
        return {}
    counts = {}
    for letter in test.split():
        if letter in counts:
            counts[letter] += 1
        else:
            counts[letter] = 1
    max_count = max(counts.values())
    most_common = [k for k, v in counts.items() if v == max_count]
    return {k: v for k, v in zip(most_common, [max_count] * len(most_common))}