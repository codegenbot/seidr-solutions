def histogram(test):
    letters = test.split()
    counts = {}
    for letter in letters:
        counts[letter] = counts.get(letter, 0) + 1
    max_count = max(counts.values())
    return {key: value for key, value in counts.items() if value == max_count}