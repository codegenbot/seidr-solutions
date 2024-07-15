def prime_length(string):
    return all(string.count(char) == 1 for char in set(string))