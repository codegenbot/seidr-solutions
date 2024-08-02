```
def histogram(test):
    if not test:
        return {}
    frequency = {}
    for letter in test.split():
        if letter not in frequency:
            frequency[letter] = 0
        frequency[letter] += 1
    max_count = max(frequency.values())
    result = {k: v for k, v in frequency.items() if v == max_count}
    return result