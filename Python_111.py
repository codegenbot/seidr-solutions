def histogram(test):
    return {letter: test.count(letter) for letter in set(test.split())}