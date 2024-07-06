def histogram(test):
    if not test:
        return {}

    word_count = {}
    for word in test.split():
        for letter in word:
            if letter in word_count:
                word_count[letter] += 1
            else:
                word_count[letter] = 1

    max_count = max(word_count.values())
    most_repeated_letters = [k for k, v in word_count.items() if v == max_count]

    return {k: v for k, v in word_count.items() if v == max_count}