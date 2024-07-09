def prime_length(string):
    import math

    return (
        all(string != string[:i] for i in range(2, int(math.sqrt(len(string))) + 1))
        if len(string) > 1
        else False
    )