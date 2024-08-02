def histogram(test):
    letters = test.split()
    result = {}
    for letter in letters:
        if letter in result:
            result[letter] += 1
        else:
            result[letter] = 1
    max_count = max(result.values())
    return {key: value for key, value in result.items() if value == max_count}