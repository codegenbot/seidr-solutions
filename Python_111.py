def histogram(test):
    if not test:
        return {}

    words = test.split()
    max_count = 0
    result = {}

    for word in words:
        if word in result:
            result[word] += 1
        else:
            result[word] = 1
            if len(result) > 1:
                max_count = max(result.values())

    return {k: v for k, v in result.items() if v == max_count}