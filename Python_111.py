def histogram(test):
    if len(test.split()) == 1:
        return {test: 1}

    letter_count = {}
    max_count = 0
    most_repeated_letters = []

    for letter in test.split():
        if letter not in letter_count:
            letter_count[letter] = 1
        else:
            letter_count[letter] += 1

        if letter_count[letter] > max_count:
            max_count = letter_count[letter]
            most_repeated_letters = [letter]
        elif letter_count[letter] == max_count:
            most_repeated_letters.append(letter)

    return {letter: count for letter, count in letter_count.items() if count in most_repeated_letters}