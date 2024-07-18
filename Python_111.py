def histogram(test):
    return {char: test.count(char) for char in test.split()}