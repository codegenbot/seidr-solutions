def histogram(test):
    if not test:
        return {}
    frequency = {}
    for char in test.split():
        if char in frequency:
            frequency[char] += 1
        else:
            frequency[char] = 1
    max_count = max(frequency.values())
    max_letters = [char for char, count in frequency.items() if count == max_count]
    return {letter: max_count for letter in max_letters}