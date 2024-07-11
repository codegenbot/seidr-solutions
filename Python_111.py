def histogram(test):
    if not test:
        return {}
    freq = {}
    for char in test.split():
        if char in freq:
            freq[char] += 1
        else:
            freq[char] = 1
    max_count = max(freq.values())
    most_freq_chars = [char for char, count in freq.items() if count == max_count]
    return {char: max_count for char in most_freq_chars}