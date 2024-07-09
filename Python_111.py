def histogram(test):
    letters = test.split()
    count_dict = {}
    for letter in letters:
        count_dict[letter] = count_dict.get(letter, 0) + 1
    max_count = max(count_dict.values())
    result = {key: value for key, value in count_dict.items() if value == max_count}
    return result