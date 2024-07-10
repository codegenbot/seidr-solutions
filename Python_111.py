def histogram(test):
    if not test:
        return {}

    letter_count = {}
    max_count = 0
    most_frequent_letters = []

    for letter in test.split():
        if letter not in letter_count:
            letter_count[letter] = 1
            max_count = 1
            most_frequent_letters = [letter]
        elif letter_count[letter] < max_count + 1:
            letter_count[letter] += 1
            if letter_count[letter] == max_count + 1:
                most_frequent_letters.append(letter)
        else:
            if letter_count[letter] > max_count:
                max_count = letter_count[letter]
                most_frequent_letters = [letter]

    return {
        letter: count
        for letter, count in letter_count.items()
        if count in (max_count,) or count == 1
    }