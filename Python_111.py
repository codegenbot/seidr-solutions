
def histogram(test):
    test = test.split()
    count = {}
    for letter in test:
        if letter not in count:
            count[letter] = 1
        else:
            count[letter] += 1
    return {k: v for k, v in count.items() if v == max(count.values())}