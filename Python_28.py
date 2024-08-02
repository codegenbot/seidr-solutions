def concatenate_strings(strings):
    return "".join(strings)

def check(func):
    strings = ["Hello", " ", "World"]
    return func(strings)

check(concatenate_strings)