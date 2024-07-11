```
def histogram(test):
    if not test:
        return {}
    freq = {}
    max_count = 0
    for letter in test.split():
        if letter not in freq:
            freq[letter] = 1
            max_count = 1
        else:
            freq[letter] += 1
            if freq[letter] > max_count:
                max_count = freq[letter]
    max_letters = [k for k, v in freq.items() if v == max_count]
    return {k: v for k, v in freq.items() if k in max_letters}