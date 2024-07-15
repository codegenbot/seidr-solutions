def concatenate_strings(strings):
    return "".join(strings)

def check(func):
    strings = ["hello", "world"]
    result = func(strings)
    return result

check(concatenate_strings)