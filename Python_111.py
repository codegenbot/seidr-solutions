def histogram(test):
    counts = {}
    for letter in test.split():
        if letter in counts:
            counts[letter] += 1
        else:
            counts[letter] = 1
    max_count = max(counts.values())
    most_repeated = [k for k, v in counts.items() if v == max_count]
    return {k: max_count for k in most_repeated}