def histogram(test):
    if not test:
        return {}

    word_list = test.split()
    max_count = len(word_list)
    result = {}

    for word in word_list:
        if word in result:
            result[word] += 1
        else:
            result[word] = 1

    max_repetitions = max(result.values())

    return {k: v for k, v in result.items() if v == max_repetitions}