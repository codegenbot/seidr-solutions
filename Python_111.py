def histogram(test):
    if not test:
        return {}
    counts = {}
    for letter in test.lower().split():
        if letter.isalpha():
            if letter in counts:
                counts[letter] += 1
            else:
                counts[letter] = 1
    max_count = max(counts.values())
    most_common = {k: v for k, v in counts.items() if v == max_count}
    return most_common