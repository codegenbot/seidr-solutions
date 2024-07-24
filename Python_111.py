```
def histogram(test):
    if not test:
        return {}
    frequency = {}
    for char in test.split():
        if char in frequency:
            frequency[char] += 1
        else:
            frequency[char] = 1
    max_count = max(frequency.values())
    result = {k: v for k, v in frequency.items() if v == max_count}
    return result