```
def histogram(test):
    if not test:
        return {}
    freq = {}
    max_count = 0
    for char in test.split():
        if char in freq:
            freq[char] += 1
        else:
            freq[char] = 1
        if freq[char] > max_count:
            max_count = freq[char]
    result = {k: v for k, v in freq.items() if v == max_count}
    return result