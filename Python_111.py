def histogram(test):
    letters = test.split()
    hist = {}
    for letter in letters:
        hist[letter] = hist.get(letter, 0) + 1
    max_count = max(hist.values())
    return {k: v for k, v in hist.items() if v == max_count}