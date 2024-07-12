def histogram(test):
    if not test:
        return {}

    count_dict = {}
    max_count = 0
    most_repeated_letters = []

    for letter in test.split():
        if letter in count_dict:
            count_dict[letter] += 1
        else:
            count_dict[letter] = 1

        if count_dict[letter] > max_count:
            max_count = count_dict[letter]
            most_repeated_letters = [letter]
        elif count_dict[letter] == max_count:
            most_repeated_letters.append(letter)

    return {
        letter: count
        for letter, count in count_dict.items()
        if letter in most_repeated_letters
    }