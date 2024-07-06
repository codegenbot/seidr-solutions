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
    most_common_chars = [char for char, count in counts.items() if count == max_count]
    return {char: max_count for char in most_common_chars}