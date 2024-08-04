def histogram(test):
    letters = test.split()
    hist = {}
    for letter in letters:
        if letter in hist:
            hist[letter] += 1
        else:
            hist[letter] = 1
    max_count = max(hist.values())
    result = {key: value for key, value in hist.items() if value == max_count}
    return result