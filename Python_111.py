def histogram(test):
    result = {}
    for letter in test.split():
        result[letter] = result.get(letter, 0) + 1
    max_count = max(result.values())
    return {letter: count for letter, count in result.items() if count == max_count}