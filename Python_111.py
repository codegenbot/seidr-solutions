def histogram(test):
    if not test:
        return {}
    counts = {}
    for char in test.split():
        if char in counts:
            counts[char] += 1
        else:
            counts[char] = 1
    max_count = max(counts.values())
    max_letters = [char for char, count in counts.items() if count == max_count]
    return {letter: max_count for letter in max_letters}