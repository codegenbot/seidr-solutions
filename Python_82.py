def prime_length(string):
    import math
    return all(string_length % i != 0 for i in range(2, int(math.sqrt(len(string))) + 1)) if len(string) > 1 else False