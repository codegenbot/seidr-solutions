def histogram(test):
    if not test:
        return {}
    word_count = {}
    for word in test.split():
        if word in word_count:
            word_count[word] += 1
        else:
            word_count[word] = 1
    max_count = max(word_count.values())
    max_letters = [word for word, count in word_count.items() if count == max_count]
    return {letter: max_count for letter in max_letters}