```
def histogram(test):
    if not test:
        return {}
    words = test.split()
    letter_count = {}
    for word in words:
        for letter in word:
            if letter in letter_count:
                letter_count[letter] += 1
            else:
                letter_count[letter] = 1
    max_count = max(letter_count.values())
    result = {letter: count for letter, count in letter_count.items() if count == max_count}
    return result