def histogram(test):
    if not test:
        return {}
    letters = test.split()
    max_count = max(len(letter) for letter in set(letters))
    result = {
        letter: len(list(group))
        for letter, group in itertools.groupby(sorted(letters), key=lambda x: x[0])
        if len(list(group)) == max_count
    }
    return result