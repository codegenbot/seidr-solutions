def prime_length(string):
    return all(string_length % i != 0 for i in range(2, int(string_length ** 0.5) + 1)) if string_length > 1 else False

prime_length('Hello')