```
def histogram(test):
    if not test:
        return {}
    freq = {}
    for word in test.split():
        for char in word:
            if char in freq:
                freq[char] += 1
            else:
                freq[char] = 1
    max_count = max(freq.values())
    result = {k: v for k, v in freq.items() if v == max_count}
    return result