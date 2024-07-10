```
def histogram(test):
    if not test:
        return {}
    d = {}
    max_count = 0
    for word in test.split():
        if word[0] in d:
            d[word[0]] += 1
        else:
            d[word[0]] = 1
        if d[word[0]] > max_count:
            max_count = d[word[0]]
    return {k: v for k, v in d.items() if v == max_count}