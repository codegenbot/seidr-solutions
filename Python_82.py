def prime_length(string):
    return all(string.count(char) == 1 for char in set(string)) and len(string) > 1 and all(len(string) % i != 0 for i in range(2, int(len(string) ** 0.5) + 1))