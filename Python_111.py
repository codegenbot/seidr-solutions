def histogram(test):
    words = test.split()
    hist = {}
    for word in words:
        hist[word] = hist.get(word, 0) + 1
    max_count = max(hist.values())
    result = {key: value for key, value in hist.items() if value == max_count}
    return result