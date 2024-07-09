def histogram(test):
    if not test:
        return {}

    letter_count = {}
    for word in test.split():
        for char in word:
            if char in letter_count:
                letter_count[char] += 1
            else:
                letter_count[char] = 1

    max_count = max(letter_count.values())
    most_repeated_letters = [k for k, v in letter_count.items() if v == max_count]

    return {
        letter: count
        for letter, count in letter_count.items()
        if letter in most_repeated_letters
    }