def histogram(test):
    hist = {}
    for letter in test.split():
        hist[letter] = hist.get(letter, 0) + 1
    max_count = max(hist.values())
    return {key: value for key, value in hist.items() if value == max_count}