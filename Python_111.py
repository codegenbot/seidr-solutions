def histogram(test):
    result = {}
    for letter in test.split():
        result[letter] = result.get(letter, 0) + 1
    max_count = max(result.values())
    return {k: v for k, v in result.items() if v == max_count}