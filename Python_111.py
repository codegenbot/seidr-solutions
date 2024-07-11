```
def histogram(test):
    if not test:
        return {}
    frequency = {}
    max_count = 0
    for letter in test.split():
        if letter in frequency:
            frequency[letter] += 1
        else:
            frequency[letter] = 1
        if frequency[letter] > max_count:
            max_count = frequency[letter]
    return {k: v for k, v in frequency.items() if v == max_count}