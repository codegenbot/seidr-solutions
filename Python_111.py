```
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
    most_frequent = {k: v for k, v in freq.items() if v == max_count}
    return most_frequent