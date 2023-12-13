def histogram(test):
    count_dict = {}
    for letter in test.split():
        count_dict[letter] = count_dict.get(letter, 0) + 1
    max_count = max(count_dict.values())
    return {letter: count for letter, count in count_dict.items() if count == max_count}