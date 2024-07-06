
def histogram(test):
    count = {}
    for char in test:
        if char in count:
            count[char] += 1
        else:
            count[char] = 1
    return {char: count for char, _ in count.items() if count[char] == max(count.values())}