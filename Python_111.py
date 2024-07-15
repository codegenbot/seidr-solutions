def histogram(test):
    freq = {}
    for letter in test.split():
        freq[letter] = freq.get(letter, 0) + 1
    max_freq = max(freq.values())
    return {k: v for k, v in freq.items() if v == max_freq}