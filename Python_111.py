def histogram(test):
    if not test:
        return {}

    letter_count = {}
    max_count = 0
    most_common_letters = []

    for letter in test.split():
        if letter in letter_count:
            letter_count[letter] += 1
        else:
            letter_count[letter] = 1

        if letter_count[letter] > max_count:
            max_count = letter_count[letter]
            most_common_letters = [letter]
        elif letter_count[letter] == max_count:
            most_common_letters.append(letter)

    return {
        letter: count
        for letter, count in letter_count.items()
        if count in (max_count,) or count == 1
    }