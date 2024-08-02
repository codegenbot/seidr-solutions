```
def histogram(test):
    if not test:
        return {}
    freq = {}
    for letter in test.split():
        if letter in freq:
            freq[letter] += 1
        else:
            freq[letter] = 1
    max_count = max(freq.values())
    result = {k: v for k, v in freq.items() if v == max_count}
    return result