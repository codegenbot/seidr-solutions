def prime_length(string):
    return all(string_length % i != 0 for i in range(2, int(len(string) ** 0.5) + 1)) if len(string) > 1 else False