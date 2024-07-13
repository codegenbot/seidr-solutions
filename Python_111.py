```
def histogram(test):
    if not test:
        return {}
    words = test.split()
    freq = {}
    for word in words:
        if word in freq:
            freq[word] += 1
        else:
            freq[word] = 1
    max_count = max(freq.values())
    most_frequent = {k: v for k, v in freq.items() if v == max_count}
    return most_frequent