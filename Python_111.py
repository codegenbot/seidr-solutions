def histogram(test):
    if not test:
        return {}

    count_dict = {}
    for char in test.split():
        if char in count_dict:
            count_dict[char] += 1
        else:
            count_dict[char] = 1

    max_count = max(count_dict.values())
    max_letters = [char for char, count in count_dict.items() if count == max_count]

    return {letter: max_count for letter in set(max_letters)}