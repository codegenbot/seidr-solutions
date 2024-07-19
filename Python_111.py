def histogram(test):
    letters = test.split()
    letter_count = {}
    for letter in letters:
        letter_count[letter] = letter_count.get(letter, 0) + 1
    max_count = max(letter_count.values())
    return {key: value for key, value in letter_count.items() if value == max_count}