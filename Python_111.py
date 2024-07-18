def histogram(test):
    letters = test.split()
    result = {}
    for letter in letters:
        result[letter] = result.get(letter, 0) + 1
    max_count = max(result.values())
    return {key: value for key, value in result.items() if value == max_count}