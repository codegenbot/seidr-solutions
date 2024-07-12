def histogram(test):
    result = {}
    for char in test.split():
        result[char] = result.get(char, 0) + 1
    max_count = max(result.values())
    return {char: count for char, count in result.items() if count == max_count}