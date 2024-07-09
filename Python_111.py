def histogram(test):
    result = {}
    test_list = test.split()
    for char in test_list:
        result[char] = result.get(char, 0) + 1
    max_count = max(result.values())
    return {char: count for char, count in result.items() if count == max_count}