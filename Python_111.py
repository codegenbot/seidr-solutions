def histogram(test):
    if not test:
        return {}

    words = test.split()
    max_count = 0
    max_letters = []

    for word in set(words):
        count = words.count(word)
        if count > max_count:
            max_count = count
            max_letters = [word]
        elif count == max_count:
            max_letters.append(word)

    return {letter: max_count for letter in max_letters}