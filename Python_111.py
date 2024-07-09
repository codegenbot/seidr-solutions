def histogram(test):
    test += " "
    max_count = 0
    most_repeated = {}

    for letter in set(test.lower().split()):
        count = test.count(letter)
        if count > max_count:
            max_count = count
            most_repeated = {letter: count}
        elif count == max_count:
            most_repeated[letter] = count

    return most_repeated