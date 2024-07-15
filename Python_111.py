def histogram(test):
    result = {}
    for letter in test.split():
        result[letter] = result.get(letter, 0) + 1
    max_count = max(result.values())
    return {key: value for key, value in result.items() if value == max_count}