def histogram(test):
    if not test:
        return {}
    count_dict = {}
    for word in test.split():
        for char in word:
            if char in count_dict:
                count_dict[char] += 1
            else:
                count_dict[char] = 1
    max_count = max(count_dict.values())
    most_repeated = {k: v for k, v in count_dict.items() if v == max_count}
    return most_repeated