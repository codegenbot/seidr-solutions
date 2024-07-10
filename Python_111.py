def histogram(test):
    return {letter: test.count(letter) for letter in test.split()}