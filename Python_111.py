def histogram(test):
    if not test:
        return {}
    freq = {}
    for word in test.split():
        for letter in word:
            if letter in freq:
                freq[letter] += 1
            else:
                freq[letter] = 1
    max_count = max(freq.values())
    max_letters = [k for k, v in freq.items() if v == max_count]
    return {letter: max_count for letter in max_letters}