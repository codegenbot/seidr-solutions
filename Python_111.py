def histogram(test):
    if not test:
        return {}

    letter_count = {}
    max_count = 0
    max_letters = []

    for letter in test.split():
        if letter in letter_count:
            letter_count[letter] += 1
        else:
            letter_count[letter] = 1

        if letter_count[letter] > max_count:
            max_count = letter_count[letter]
            max_letters = [letter]
        elif letter_count[letter] == max_count:
            max_letters.append(letter)

    return {letter: max_count for letter in max_letters}