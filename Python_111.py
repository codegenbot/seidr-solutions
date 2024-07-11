def histogram(test):
    if not test:
        return {}

    letter_count = {}
    max_count = 0

    for word in test.split():
        for letter in word:
            if letter.isalpha():
                if letter not in letter_count:
                    letter_count[letter] = 1
                else:
                    letter_count[letter] += 1
                if letter_count[letter] > max_count:
                    max_count = letter_count[letter]

    max_letters = [k for k, v in letter_count.items() if v == max_count]
    return {k: v for k, v in letter_count.items() if k in max_letters}