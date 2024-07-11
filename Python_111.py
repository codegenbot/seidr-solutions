def histogram(test):
    if not test:
        return {}

    words = test.split()
    max_count = max(len(word) for word in set(words))
    result = {
        word: len(list(group)) for word, group in itertools.groupby(sorted(words))
    }
    return {k: v for k, v in result.items() if v == max_count}