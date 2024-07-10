def histogram(test):
    if not test:
        return {}

    letters = test.split()
    max_count = max(len(letter) for letter in set(letters))

    result = {letter: len(list(group)) for letter, group in itertools.groupby(letters)}

    most_common = [k for k, v in result.items() if v == max_count]

    return {letter: max_count for letter in most_common}