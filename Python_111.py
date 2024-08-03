```
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
    most_common = {k: v for k, v in freq.items() if v == max_count}
    return most_common