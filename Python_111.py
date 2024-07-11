def histogram(test):
    if not test:
        return {}

    counts = {}
    for word in test.split():
        for char in word:
            if char in counts:
                counts[char] += 1
            else:
                counts[char] = 1

    max_count = max(counts.values())
    most_common = [k for k, v in counts.items() if v == max_count]

    return {
        char: count for char, count in zip(most_common, [max_count] * len(most_common))
    }